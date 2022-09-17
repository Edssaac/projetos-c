#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1000


// Structs:
typedef struct tpFila
{   int valor;
    struct tpFila *proximo;
} tpFila;

typedef struct fila
{   tpFila *inicio;
    tpFila *fim;
} fila;

typedef struct tpPilha
{   int valor;
    struct tpPilha *proximo;
} tpPilha;

typedef struct pilha
{   tpPilha *topo;
} pilha;

typedef struct tpPrioridade
{   int valor;
    int prioridade;
} tpPrioridade;

typedef struct prioridade
{   int quantidade;
    struct tpPrioridade valores[MAX];
} prioridade;
////////////////


//Funções:
void iniciarFila(fila *fila)
{
    fila->inicio = fila->fim = NULL;
}

void adicionarElemento(fila *fila, int x)
{
    tpFila *aux;
    aux = (tpFila*) malloc(sizeof(tpFila));

    if (fila->inicio)
    {
        fila->fim->proximo = aux;
        aux->proximo = NULL;
    }
    else
        fila->inicio = aux;

    fila->fim = aux;
    aux->valor = x;
}

void removerElemento(fila *fila)
{
    tpFila *aux;

    if (fila->inicio)
    {
        if (fila->inicio->proximo)
        {
            aux = fila->inicio;
            fila->inicio = fila->inicio->proximo;
            free(aux);
        }
        else
        {
            aux = fila->inicio;
            fila->inicio = fila->fim = NULL;
            free(aux);
        }
    }
}

int retornarPrimeiro(fila *fila)
{
    return fila->inicio->valor;
}

void iniciarPilha(pilha *pilha)
{
    pilha->topo = NULL;
}

int retornarTopo(pilha *pilha)
{
    return pilha->topo->valor;
}

void removerElementoPilha(pilha *pilha)
{
    tpPilha *aux;

    aux = pilha->topo;
    if (aux)
    {
        pilha->topo = aux->proximo;
        free(aux);
    }
}

void adicionarElementoPilha(pilha *pilha, int x)
{
    tpPilha *aux;

    aux = (tpPilha *) malloc(sizeof(tpPilha));

    aux->proximo = pilha->topo;
    pilha->topo = aux;
    aux->valor = x;
}

void adicionarPrioridade(prioridade *filaP, int prioridade, int id)
{
    if (filaP->quantidade != MAX)
    {
        filaP->valores[filaP->quantidade].valor = id;
        filaP->valores[filaP->quantidade].prioridade = prioridade;
        balancear(filaP, filaP->quantidade);
        filaP->quantidade++;
    }
}

void balancear(prioridade *filaP, int filho)
{
    int pai;
    tpPrioridade tmp;

    pai = (filho-1)/2;
    while ((filho > 0) && (filaP->valores[pai].prioridade <= filaP->valores[filho].prioridade))
    {
        tmp = filaP->valores[filho];
        filaP->valores[filho] = filaP->valores[pai];
        filaP->valores[pai] = tmp;

        filho = pai;
        pai = (pai - 1) / 2;
    }
}

int retornarTopoPrioridade(prioridade *filaP)
{
    if (filaP == NULL ||filaP->quantidade == 0)
        return 0;
    return filaP->valores[0].valor;
}

prioridade* iniciarPrioridade()
{
    prioridade *filaP;

    filaP = (prioridade *) malloc(sizeof(prioridade));
    if (filaP)
        filaP->quantidade = 0;

    return filaP;
}

void removerElementoPrioridade(prioridade *filaP)
{
    if (filaP->quantidade != 0)
    {
        filaP->quantidade--;
        filaP->valores[0] = filaP->valores[filaP->quantidade];
        balancearRemocao(filaP, 0);
    }
}

void balancearRemocao(prioridade *filaP, int pai)
{
    int filho;
    tpPrioridade tmp;

    filho = 2*pai+1;
    while (filho < filaP->quantidade)
    {
        if (filho < filaP->quantidade - 1)
            if (filaP->valores[filho].prioridade < filaP->valores[filho + 1].prioridade)
                ++filho;

        if (filaP->valores[pai].prioridade >= filaP->valores[filho].prioridade)
            break;

        tmp = filaP->valores[pai];
        filaP->valores[pai] = filaP->valores[filho];
        filaP->valores[filho] = tmp;

        pai = filho;
        filho = 2*pai+1;
    }
}
//////////////////


int main(void)
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int x, comando, i;
        bool ehFila, ehPilha, ehPrioridade;
        prioridade *filaP = iniciarPrioridade();
        fila filaNormal;
        pilha pilhaLeitura;

        iniciarFila(&filaNormal);
        iniciarPilha(&pilhaLeitura);

        ehFila = ehPilha = ehPrioridade = true;
        for (i = 0; i < n; ++i)
        {
            scanf("%d %d", &comando, &x);
            if (comando == 1)
            {
                adicionarPrioridade(filaP, x, x);
                adicionarElementoPilha(&pilhaLeitura, x);
                adicionarElemento(&filaNormal, x);
            }
            else
            {
                if (retornarTopo(&pilhaLeitura) != x)
                    ehPilha = false;
                else
                    removerElementoPilha(&pilhaLeitura);

                if (retornarPrimeiro(&filaNormal) != x)
                    ehFila = false;
                else
                    removerElemento(&filaNormal);

                if (retornarTopoPrioridade(filaP) != x)
                    ehPrioridade = false;
                else
                    removerElementoPrioridade(filaP);
            }
        }

        if (!ehPilha && !ehFila && !ehPrioridade)
            printf("impossible\n");
        else if (ehPilha && ehPrioridade)
            printf("not sure\n");
        else if (ehPilha && ehFila)
            printf("not sure\n");
        else if (ehPrioridade && ehFila)
            printf("not sure\n");
        else if (ehPrioridade)
            printf("priority queue\n");
        else if (ehFila)
            printf("queue\n");
        else if (ehPilha)
            printf("stack\n");
    }

    return 0;
}
