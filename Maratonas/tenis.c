#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
    int nivel[4], i, dif;

    for ( i=0; i<4; i++ )
        scanf("%i", &nivel[i]);

    qsort( nivel, 4, sizeof(nivel[0]), ordem );
    dif = (nivel[0]+nivel[3])-(nivel[1]+nivel[2]);
    printf("%d\n", dif );

    return 0;
}
