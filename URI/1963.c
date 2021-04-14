#include <stdio.h>

int main() {

    double valor_antigo, valor_atual;
    double porc, dif;


    scanf("%lf %lf", &valor_antigo, &valor_atual);

    dif = valor_atual-valor_antigo;
    porc = dif * (100.00/valor_antigo);

    printf("%.2lf%%\n", porc);

    return 0;
}
