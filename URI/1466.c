#include <stdio.h>
#include <stdlib.h>

#define MAX 1000


typedef struct regNo
{   struct regNo *esq;
    int valor;
    struct regNo *dir;
} regNo;

regNo *buscaPrincipal(regNo *r, int v)
{
    if ( r == NULL )
		return NULL;

    if ( v <= r->valor )
        if ( r->esq == NULL )
            return r;
        else
            return buscaPrincipal(r->esq, v);
    else
        if ( r->dir == NULL )
            return r;
        else
            return buscaPrincipal(r->dir, v);
}


int main(void)
{
    regNo *raiz, *principal, *aux, *fila[MAX];
    int tam, caso, casos, d, noh, marcA, marcB;

    scanf("%d", &casos);
    for (caso=1; caso<=casos; caso++)
    {
		for(d=0;d<MAX;d++)
			fila[d] = NULL;

        raiz = NULL;
        scanf("%d", &tam);
        for (d=0; d<tam; d++)
        {
            scanf("%d", &noh);
            aux = (regNo *) malloc(sizeof(regNo));
            aux->valor = noh;
            aux->esq = aux->dir = NULL;

            principal = buscaPrincipal(raiz, noh);
            if(principal == NULL)
                raiz = aux;
            else if (principal->valor != noh)
            {
                if (noh < principal->valor)
                    principal->esq = aux;
                else
                    principal->dir = aux;
            }
        }

        printf("Case %d:\n", caso);

        aux = raiz;
        marcA = 1;
        marcB  = 1;
        fila[0] = aux;
        while(aux != NULL)
        {
            printf("%d", aux->valor);

            if(aux->esq != NULL)
            {
                fila[marcA] = aux->esq;
                marcA++;
            }

            if(aux->dir != NULL)
            {
                fila[marcA] = aux->dir;
                marcA++;
            }

            if(fila[marcB]!=NULL)
                printf(" ");

            aux = fila[marcB];
            marcB++;
        }

        printf("\n\n");
    }

    return 0;
}
