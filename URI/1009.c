#include <stdio.h>

int main() {
    char nome[10];
    float sal_fixo, total_vendas;

    scanf("%s %f %f", &nome, &sal_fixo, &total_vendas);

    printf("TOTAL = R$ %.2f\n", ( sal_fixo + (0.15 * total_vendas) ) );

    return 0;
}
