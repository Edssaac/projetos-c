#include <stdio.h>

int ordem( const void *a, const void *b )
{
    int *x = (int*)a;
    int *y = (int*)b;

    if ( *x < *y )
        return -1;
    else if ( *x==*y )
        return 0;
    else
        return 1;
}

int main(void)
{
    int jogadores[4], i;


    for ( i=0; i<4; i++ )
        scanf("%d", &jogadores[i]);

    qsort(jogadores, 4, sizeof(jogadores[0]), ordem);

    printf("%d\n", abs((jogadores[1]+jogadores[2])-(jogadores[0]+jogadores[3])) );

    return 0;
}
