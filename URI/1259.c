#include <stdio.h>
#include <stdlib.h>


int ordem( const void *, const void * );

int main(void)
{
    int N, i, x, j=0, k=0;
    scanf("%d", &N);
    int par[N];
    int impar[N];


    for ( i=0; i<N; i++ )
    {
        scanf("%d", &x);

        if ( (x%2)==0 )
            par[j++] = x;
        else
            impar[k++] = x;
    }

    qsort( par, j, sizeof(par[0]), ordem );
    qsort( impar, k, sizeof(impar[0]), ordem );

    for ( i=0; i<j; i++ )
        printf("%d\n", par[i] );
    for ( i=k-1; i>=0; i-- )
        printf("%d\n", impar[i] );

    return 0;
}

int ordem( const void *a, const void *b )
{
    int *x = (int*)a;
    int *y = (int*)b;

    if ( *x < *y )
        return -1;
    else if ( *x == *y )
        return 0;
    else
        return 1;
}
