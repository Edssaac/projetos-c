#include <stdio.h>
#include <math.h>

int main() {

    int jogadores, voto, favoravel, porc, i;


    while ( scanf("%d", &jogadores) != EOF )
    {
        favoravel=0;

        for ( i=0; i<jogadores; i++ )
        {
            scanf("%d", &voto);
            if (voto==1) favoravel++;
        }

        porc = (int) ceil((jogadores/3.0))*2;

        printf( (favoravel>=porc||favoravel==jogadores) ? "impeachment" : "acusacao arquivada" );
        printf("\n");
    }


    return 0;
}
