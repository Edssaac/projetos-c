#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp( const void *, const void * );

struct time
{
    char nome[21];
    int gol;
    int vitoria;
    int pontos;
    int pos;
};


int main(void)
{
    int casos, qTimes, qJogos, jogo, i;
    int a1, a2;
    char b1[21], b2[21];
    scanf("%d", &casos);

    while ( casos-- )
    {
        scanf("%d %d", &qTimes, &qJogos);
        struct time tmx[qTimes];

        for ( i=0; i<qTimes; i++ )
        {
            scanf("%s", tmx[i].nome);
            tmx[i].gol = 0;
            tmx[i].vitoria = 0;
            tmx[i].pontos = 0;
            tmx[i].pos = i;
        }

        for ( jogo=0; jogo<qJogos; jogo++ )
        {
            scanf("%d", &a1);
            scanf("%s", b1);
            scanf("%d", &a2);
            scanf("%s", b2);

            for ( i=0; i<qTimes; i++ )
            {
                if ( strcmp(b1, tmx[i].nome)==0 )
                {
                    tmx[i].gol += a1;

                    if ( a1==a2 ) ///empate
                    {
                        tmx[i].pontos++;
                    }
                    else if ( a1>a2 )
                    {
                        tmx[i].vitoria++;
                        tmx[i].pontos += 3;
                    }
                }
                else if ( strcmp(b2, tmx[i].nome)==0 )
                {
                    tmx[i].gol += a2;

                    if ( a1==a2 ) ///empate
                    {
                        tmx[i].pontos++;
                    }
                    else if ( a2>a1 )
                    {
                        tmx[i].vitoria++;
                        tmx[i].pontos += 3;
                    }
                }
            }
        }

        qsort( tmx, qTimes, sizeof(struct time), comp );

        for ( i=0; i<qTimes; i++ )
        {
            printf("%s\n", tmx[i].nome);
        }

    }

    return 0;
}

int comp( const void *a, const void *b )
{
    struct time *x = (struct time*)a;
    struct time *y = (struct time*)b;

    if ( x->pontos > y->pontos )
        return -1;
    else if ( x->pontos == y->pontos )
    {
        if ( x->vitoria > y->vitoria )
            return -1;
        else if ( x->vitoria == y->vitoria )
        {
            if ( x->gol > y->gol )
                return -1;
            else if ( x->gol == y->gol )
            {
                if ( x->pos < y->pos )
                    return -1;
                else if ( x->pos > y->pos )
                    return 1;
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
