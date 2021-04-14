#include <stdio.h>

int main() {

    int idade, idades, individuos;
    float media;

    idades = individuos = 0;

    do
    {
        scanf("%i", &idade);
        if (idade > 0) {
            idades+=idade;
            individuos++;
        }

    } while (idade > 0);

    media = (float) idades/individuos;
    printf("%.2f\n", media);

    return 0;
}
