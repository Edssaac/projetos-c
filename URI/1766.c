#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ordem( const void *, const void * );

struct rena
{
    char nome[101];
    int peso;
    int idade;
    float altura;
};


int main(void)
{
    int Tcasos, nTotalRenas, mRenas, caso, i;

    scanf("%d", &Tcasos);

    for ( caso=0; caso<Tcasos; caso++ )
    {
        scanf("%d %d", &nTotalRenas, &mRenas);
        struct rena rnx[nTotalRenas];

        for ( i=0; i<nTotalRenas; i++ )
        {
            scanf("%s %d %d %f", rnx[i].nome, &rnx[i].peso, &rnx[i].idade, &rnx[i].altura );
        }

        qsort( rnx, nTotalRenas, sizeof(struct rena), ordem );

        printf("CENARIO {%d}\n", (caso+1) );
        for ( i=0; i<mRenas; i++ )
        {
            printf("%d - %s\n", (i+1), rnx[i].nome );
        }
    }

    return 0;
}


int ordem( const void *a, const void *b )
{
    struct rena *x = (struct rena*)a;
    struct rena *y = (struct rena*)b;

    if ( x->peso > y->peso )
        return -1;
    else if ( x->peso == y->peso )
    {
        if ( x->idade < y->idade )
            return -1;
        else if ( x->idade == y->idade )
        {
            if ( x->altura < y->altura )
                return -1;
            else if ( x->altura == y->altura )
                return strcmp( x->nome, y->nome );
            else
                return 1;
        }
        else
            return 1;
    }
    else
        return 1;
}

