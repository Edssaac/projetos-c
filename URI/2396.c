#include <stdio.h>
#include <stdlib.h>


int placar( const void *, const void * );

struct carro
{
    int id;
    int tempo;
    int tempoTotal;
};


int main(void)
{
    int nCarros, mVoltas, i, j;
    scanf("%d %d", &nCarros, &mVoltas);
    struct carro crx[nCarros];


    for ( i=0; i<nCarros; i++ )
    {
        crx[i].id = i+1;
        crx[i].tempoTotal = 0;
        for ( j=0; j<mVoltas; j++ )
        {
            scanf("%d", &crx[i].tempo);
            crx[i].tempoTotal += crx[i].tempo;
        }
    }

    qsort( crx, nCarros, sizeof(struct carro), placar );

    for ( i=0; i<3; i++ )
        printf("%d\n", crx[i].id );

    return 0;
}

int placar( const void *a, const void *b )
{
    struct carro *x = (struct carro*)a;
    struct carro *y = (struct carro*)b;

    if ( x->tempoTotal < y->tempoTotal )
        return -1;
    else if ( x->tempoTotal == y->tempoTotal )
        return 0;
    else
        return 1;
}
