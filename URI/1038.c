#include <stdio.h>


int main() {
/*
Codigo  -   Especificação   -   Preço
1       -   Cachorro_Quente -   R$4.00
2       -   X_Salada        -   R$4.50
3       -   X_Bacon         -   R$5.00
4       -   Torrada_Simples -   R$2.00
5       -   Refrigerante    -   R$1.50
*/

    int cod, quant;
    float total;

    scanf("%i", &cod);
    scanf("%i", &quant);

    switch (cod)
    {
        case 1:
            total = 4.00 * quant;
            break;
        case 2:
            total = 4.50 * quant;
            break;
        case 3:
            total = 5.00 * quant;
            break;
        case 4:
            total = 2.00 * quant;
            break;
        case 5:
            total = 1.50 * quant;
            break;
        default:
            break;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}
