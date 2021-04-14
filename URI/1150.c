#include <stdio.h>

int main() {

    int X, Z, soma, quantidade;
    soma = quantidade = 0;


    scanf("%i", &X);

    do {
        scanf("%i", &Z);
    } while (Z <= X);

    do
    {
        soma += X;
        X++;
        quantidade++;

    } while (soma <= Z);


    printf("%i\n", quantidade);

    return 0;
}
