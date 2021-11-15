#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare( const void *a, const void *b )
{
    ///Este método não funciona para números decimais:
    //return (int) ( *(float*)a - *(float*)b );

    ///Melhor maneira de tratar números decimais:
    if ( *(float*)a > *(float*)b  )
        return 1;
    else if ( *(float*)a < *(float*)b  )
        return -1;
    else
        return 0;

    ///Se devolver um número maior que zero, então a>b;
    ///Se devolver um número menor que zero, então a<b;
    ///Se devolver zero, então a=b;
}


int main()
{
    float notas[5], soma=0;
    int nota;

    ///Lendo as cinco notas:
    for ( nota=0; nota<5; nota++ )
    {
        scanf("%f", &notas[nota]);
    }

    ///sintaxe: qsort( nomeVetor, tamanhoVetor, tamanhoDoTipoDeDados, FunçãoQueCompara );
    qsort( notas, 5, sizeof(float), compare );

    ///Somando apenas as notas que se encontram no meio:
    for ( nota=1; nota<4; nota++ )
    {
        soma+=notas[nota];
        //printf("%f\n", notas[nota]);
    }

    printf("%.1f\n", soma);

    return 0;
}
