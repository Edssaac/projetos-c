#include <stdio.h>

struct nota
{
    char n;
};

int main(void)
{
    int jogo, time;
    struct nota ntx[6];


    for ( jogo=0; jogo<6; jogo++ )
    {
        scanf(" %c", &ntx[jogo].n);
    }

    time=0;
    for ( jogo=0; jogo<6; jogo++ )
    {
        if ( ntx[jogo].n == 'V' )
            time++;
    }

    if ( time >= 5 )
        printf("1\n");
    else if ( time >=3 )
        printf("2\n");
    else if ( time >= 1 )
        printf("3\n");
    else
        printf("-1\n");


    return 0;
}
