#include <stdio.h>

int main() {

    int valor, maior_valor, posicao, i;

    posicao = maior_valor = 0;


    for (i=1; i<=100; i++) {

        scanf("%i", &valor);

        if (maior_valor < valor) {
            maior_valor = valor;
            posicao = i;
        }

    }


    printf("%d\n", maior_valor);
    printf("%i\n", posicao);

    return 0;
}
