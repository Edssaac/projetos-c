#include <stdio.h> //Entrada e saída padrão;
#include <string.h> //Usando strlen().
#include <ctype.h> //Usando isalpha() e islower();

int main() {

    //Variaveis Necessarias:
    int casos, i, validador, indice;
    char ra[105], *parte;


    scanf("%d", &casos); //Lendo a quantidade de casos;
    while (casos--)
    {
        scanf("%s", ra); //Lendo os RA's que forem digitados;
        validador = 0; // 0 Significa que está apto para continuar;

        if( strlen(ra)!=20 ) //nossa string precisa ter exatamento 20 caracteres;
        {
            printf("INVALID DATA\n"); //Se não tiver então esta errado;
            continue;
        }

        //verificando os dois primeiros caracteres:
        for ( i=0; i<2; i++ )
            if ( !isalpha(ra[i]) || islower(ra[i]) ) //nosso RA deve LETRA e ser MAIUSCULO;
            {
                printf("INVALID DATA\n");
                validador = 1; // 1 Significa que não está apto para continuar;
                break;
            }

        if ( validador==0 ) //Se estiver apto para continuar então...
        {
            indice=0; //Variavel que dirá a partir de onde copiaremos nossos numeros;
            for ( i=2; i<strlen(ra); i++ ) //For para descobrir onde esta o último zero antes do numero que devemos pegar;
                if ( ra[i] != '0')
                {
                    indice = i;
                    break;
                }

            memcpy( ra, &ra[indice], strlen(ra) ); //memcpy( quemRecebe, quemPassa[aPartirDeOnde], quantidadeQueVaiPegar );
            printf("%s\n", ra); //E por fim dando o resultado;
        }

    }


    return 0;
}
