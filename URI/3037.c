#include <stdio.h>

int main() {

    int jogadas, i, x, d, joao, maria;


    scanf("%d", &jogadas);

    while (jogadas>0)
    {
        joao=maria=0;

        for ( i=0; i<3; i++ )
        {
            scanf("%d %d", &x, &d);
            joao+= x*d;
        }

        for ( i=0; i<3; i++ )
        {
            scanf("%d %d", &x, &d);
            maria+= x*d;
        }


        printf( joao>maria? "JOAO\n" : "MARIA\n" );

        jogadas--;
    }


    return 0;
}
