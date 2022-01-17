#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamSequencia, altura, qPicos=1;
    int *alturas;

    ///Lendo o tamanho da sequência da montanha:
    scanf("%d", &tamSequencia);

    ///Criando um vetor dinâmico para armazenar o tamamho de cada parte da montanha:
                  ///malloc( quantidadeItens * tamanhoTipoDeDados );
    alturas = (int*) malloc( tamSequencia * sizeof(int) );


    ///Lendo a altura de cada parte:
    for ( altura=0; altura<tamSequencia; altura++ )
    {
        scanf("%d", &alturas[altura]);
    }

    /**
    Lógica:
    como não há números consecutivos iguais, se houver três números consecutivos na sequência,
    tal que o número do meio é menor do que os outros dois números, então a montanha tem mais de um pico.

    Ou seja: a quantidade de picos já começa com 1, porém se a condição aplicada for válida,
    então significa que há mais de um pico na montanha.

    123 = o número do meio (2) não é menor que o primeiro (1) nem que o terceiro (3), logo essa montanha tem apenas um pico, no caso o 3.
    825 = o número do meio (2) é menor que o primeiro (8) e menor que o terceiro (5), então a montanha tem dois picos, no caso o 8 e o 5.
    **/

    for ( altura=1; altura<tamSequencia-1; altura++ )
    {
        ///Ai-1 > Ai e Ai < Ai+1
        if ( alturas[altura-1]>alturas[altura] && alturas[altura]<alturas[altura+1] )
        {
            qPicos++;
        }
    }


    printf( (qPicos==1) ? "N\n" : "S\n" );
    free(alturas);

    return 0;
}
