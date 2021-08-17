#include <stdio.h>


int main(void)
{
    char times[] = "ABCDEFGHIJKLMNOP";
    char t2[9];
    char t3[5];
    int i, j, pontos[16];


    for ( i=0, j=0; i<16; i+=2, j++ )
    {
        scanf("%d %d", &pontos[i], &pontos[i+1] );

        if ( pontos[i] > pontos[i+1] )
            t2[j] = times[i];
        else
            t2[j] = times[i+1];
    }

    for ( i=0, j=0; i<8; i+=2, j++ )
    {
        scanf("%d %d", &pontos[i], &pontos[i+1] );

        if ( pontos[i] > pontos[i+1] )
            t3[j] = t2[i];
        else
            t3[j] = t2[i+1];
    }

    for ( i=0, j=0; i<4; i+=2, j++ )
    {
        scanf("%d %d", &pontos[i], &pontos[i+1]);

        if ( pontos[i] > pontos[i+1] )
            t2[j] = t3[i];
        else
            t2[j] = t3[i+1];
    }

    scanf("%d %d", &pontos[0], &pontos[1]);

    if ( pontos[0] > pontos[1] )
        printf("%c\n", t2[0]);
    else
        printf("%c\n", t2[1]);

    return 0;
}
//4 1
//1 0
//0 4
//3 1
//2 3
//1 2
//2 0
//0 2
//
//1 2
//4 3
//0 1
//3 2
//
//3 4
//1 4
//
//1 0
