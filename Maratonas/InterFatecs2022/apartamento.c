#include <stdio.h>
#include <stdlib.h>

int main() {

    double valorInicial, valorApartamento, taxaT;

    scanf("%lf %lf %lf", &valorInicial, &valorApartamento, &taxaT);

    if ( valorInicial >= valorApartamento ) {
        printf("pode comprar agora\n");
        return 0;
    }

    double aux;
    int vezes = 0;

    while( valorApartamento > valorInicial ) {

        aux = ( valorInicial * (taxaT/100) );
        valorInicial += aux;
        vezes++;
    }

    if (vezes == 1)
        printf("possivel em %d mes\n", vezes);
    else
        printf("possivel em %d meses\n", vezes);

    return 0;
}

