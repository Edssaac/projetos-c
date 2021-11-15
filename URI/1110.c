#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int info;
    struct lista *prox;
} Lista;

typedef struct fila
{
    Lista *inicio;
    Lista *fim;
} Fila;

Fila *pilhaInicializar()
{
    Fila *topo = (Fila*)malloc(sizeof(Fila));
    topo->inicio = NULL;
    topo->fim = NULL;
    return topo;
}

void *pilhaIncluir(Fila *p, int carta)
{
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    novo->info = carta;
    novo->prox = NULL;

    if(p->inicio==NULL) {
        p->inicio = novo;
        p->fim = novo;
    }
    else {
        p->fim->prox = novo;
        p->fim = novo;
    }
}

int pilhaExcluir(Fila *item)
{
    int carta;
    Lista *l;

    l = item->inicio;
    carta = l->info;

    item->inicio = l->prox;
    if(item->inicio==NULL)
        item->fim = NULL;

    free(l);
    return carta;
}

int pilhaVazia(Fila *item)
{
    return item->inicio==NULL;
}

int main(void)
{
    int N, i, carta, quantidade = 0;
    Fila *baralho;

    baralho = pilhaInicializar();
    do
    {
        scanf("%d", &N);
        if (N)
        {
            quantidade = N;
            for(i=1;i<=N;i++)
            {
                pilhaIncluir(baralho, i);
            }

            printf("Discarded cards:");

            while( quantidade!=1 )
            {
                printf(" %d", pilhaExcluir(baralho));
                pilhaIncluir(baralho, pilhaExcluir(baralho));

                if(quantidade!=2)
                    printf(",");
                quantidade--;
            }

            if( !pilhaVazia(baralho) )
                printf("\nRemaining card: %d\n", pilhaExcluir(baralho));
        }

    } while ( N!=0 );

    return 0;
}
