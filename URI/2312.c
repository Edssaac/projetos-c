#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int placar( const void *, const void * );

struct competidor
{
    char nome[50];
    int ouro, prata, bronze;
};


int main()
{
    int N, i;

    scanf("%d", &N);
    struct competidor cpx[N];

    for( i=0; i<N; i++ )
        scanf("%s %d %d %d", cpx[i].nome, &cpx[i].ouro, &cpx[i].prata, &cpx[i].bronze );

    qsort( cpx, N, sizeof( struct competidor), placar );

    for( i=0; i<N; i++ )
        printf("%s %d %d %d\n", cpx[i].nome, cpx[i].ouro, cpx[i].prata, cpx[i].bronze );

    return 0;
}


int placar( const void *a, const void *b )
{
    struct competidor *x = (struct competidor*)a;
    struct competidor *y = (struct competidor*)b;


    if ( x->ouro > y->ouro )
        return -1;
    else if ( x->ouro == y->ouro )
    {
        if ( x->prata > y->prata )
            return -1;
        else if ( x->prata == y->prata )
        {
            if ( x->bronze > y->bronze )
                return -1;
            else if ( x->bronze == y->bronze )
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
