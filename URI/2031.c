#include <stdio.h>
#include <string.h>

struct escolhas {

    char jogador1[7], jogador2[7];

};

int main(void) {

    int casos, caso;
    scanf("%d", &casos);
    struct escolhas rodada[casos];


    for ( caso=0; caso<casos; caso++ )
    {
        scanf("%s", rodada[caso].jogador1);
        scanf("%s", rodada[caso].jogador2);
    }

    for ( caso=0; caso<casos; caso++ )
    {
        if ( strcmp(rodada[caso].jogador1, "ataque") == 0 )
        {
            if ( strcmp(rodada[caso].jogador2, "ataque") == 0 ) { printf("Aniquilacao mutua\n"); }
            else if ( strcmp(rodada[caso].jogador2, "pedra") == 0 ) { printf("Jogador 1 venceu\n"); }
            else if ( strcmp(rodada[caso].jogador2, "papel") == 0 ) { printf("Jogador 1 venceu\n"); }

        }
        else if ( strcmp(rodada[caso].jogador1, "pedra") == 0 )
        {
            if ( strcmp(rodada[caso].jogador2, "ataque") == 0 ) { printf("Jogador 2 venceu\n"); }
            else if ( strcmp(rodada[caso].jogador2, "pedra") == 0 ) { printf("Sem ganhador\n"); }
            else if ( strcmp(rodada[caso].jogador2, "papel") == 0 ) { printf("Jogador 1 venceu\n"); }

        }
        else if ( strcmp(rodada[caso].jogador1, "papel") == 0 )
        {
            if ( strcmp(rodada[caso].jogador2, "ataque") == 0 ) { printf("Jogador 2 venceu\n"); }
            else if ( strcmp(rodada[caso].jogador2, "pedra") == 0 ) { printf("Jogador 2 venceu\n"); }
            else if ( strcmp(rodada[caso].jogador2, "papel") == 0 ) { printf("Ambos venceram\n"); }

        }
    }

    return 0;
}
