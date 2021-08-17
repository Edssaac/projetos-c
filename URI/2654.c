#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int comp( const void *, const void *);

struct competidor
{
    char nome[101];
    int poder;
    int matou;
    int morreu;
};


int main(void)
{
    int nSeres, i;


    scanf("%d", &nSeres);
    struct competidor cpx[nSeres];

    for ( i=0; i<nSeres; i++ )
    {
        scanf("%s %d %d %d", cpx[i].nome, &cpx[i].poder, &cpx[i].matou, &cpx[i].morreu );
    }

    qsort( cpx, nSeres, sizeof(struct competidor), comp );

    printf("%s\n", cpx[0].nome );

    return 0;
}

int comp( const void *a, const void *b )
{
    struct competidor *x = (struct competidor*)a;
    struct competidor *y = (struct competidor*)b;


    if ( x->poder > y->poder )
        return -1;
    else if ( x->poder == y->poder )
    {
        if ( x->matou > y->matou )
            return -1;
        else if ( x->matou == y->matou )
        {
            if ( x->morreu < y->morreu )
                return -1;
            else if ( x->morreu == y->morreu )
            {
                return strcmp( x->nome, y->nome );
            }
            else
                return 1;
        }
        else
            return 1;
    }
    else
        return 1;
}
