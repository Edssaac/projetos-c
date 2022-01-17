#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct lista
{
    char placa[8];
    struct lista *prox;
}tLista;

typedef struct
{
    int vaga;
    char placa[8];
} estacionamento;

int main(void)
{
    char placa[8];
    int i, tPlacas = 0;
    tLista *tPixel, *aux, *ant;
    estacionamento vagas[15];

    tPixel = NULL;
    while(scanf("%s", &placa) != EOF)
    {
//        if ( strcmp(placa, "fim") == 0)
//            break;

        tPlacas++;

        aux = (tLista *) malloc(sizeof(tLista));

        strcpy( aux->placa, placa );
        aux->prox = NULL;

        if(tPixel == NULL)
            tPixel = aux;
        else
            ant->prox = aux;

        ant = aux;
        //fflush(stdin);
    }

    for ( i=0; i<15; i++ )
    {
        vagas[i].vaga = -1;
    }

    aux = tPixel;
    int p;
    while (aux != NULL)
    {
        //printf("%s = ", aux->placa);
        p=0;
        for ( i=0; i<7; i++ )
        {
            if ( isalpha(aux->placa[i]) )
            {
                p += aux->placa[i];
            }
            else
            {
                p += aux->placa[i];
            }
        }
        p = (p%15)+1;
        //printf("%d\n", p);

        if ( vagas[p-1].vaga == -1 )
        {
            vagas[p-1].vaga = p;
            strcpy(vagas[p-1].placa, aux->placa);
        }

        aux = aux->prox;
    }

    for ( i=0; i<15; i++ )
    {
        if ( vagas[i].vaga != -1 )
            printf("%d %s\n", vagas[i].vaga, vagas[i].placa);
    }

    return 0;
}
