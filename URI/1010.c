#include <stdio.h>

int main() {

    int cod_peca, quant, i;
    float valor_unidade, valor_total=0;

    for ( i=1; i<=2; i++ ) {
        scanf("%i %i %f", &cod_peca, &quant, &valor_unidade);

        valor_total += (quant * valor_unidade);
    }

    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

    return 0;

}
