#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int valor;
    struct lista *prox;
}tLista;

int main(void)
{
    int pixel, i;
    float pTotal = 0.0;
    tLista *tPixel, *aux, *ant;

    tPixel = NULL;

    while(scanf("%d", &pixel) != EOF)
    {
//        if(pixel ==0)
//            break;

        pTotal += pixel;

        aux = (tLista *) malloc(sizeof(tLista));

        aux->valor = pixel;
        aux->prox = NULL;

        if(tPixel == NULL)
            tPixel = aux;
        else
            ant->prox = aux;

        ant = aux;
    }

    aux = tPixel;
    while (aux != NULL)
    {
        printf("%.3f\n", (aux->valor / pTotal));
        aux = aux->prox;
    }

    return 0;
}
