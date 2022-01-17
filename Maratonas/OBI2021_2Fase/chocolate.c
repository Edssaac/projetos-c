#include <stdio.h>

int main()
{

    int N, p1[2], p2[2], i;

    scanf("%d", &N);

    for ( i=0; i<2; i++ )
        scanf("%d", &p1[i]);

    for ( i=0; i<2; i++ )
        scanf("%d", &p2[i]);

    if ( (p1[0] < N/2) != (p1[1] < N/2) || (p2[0] < N/2) != (p2[1] < N/2))
        printf("S\n");
    else
        printf("N\n");


    return 0;
}
