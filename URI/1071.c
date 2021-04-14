#include <stdio.h>

int main() {

    int X, Y, i, aux, Soma;
    Soma = 0;

    scanf("%i %i", &X, &Y);

    if (X>Y) {
        aux = X;
        X = Y;
        Y = aux;
    }

    for (i= (X+1) ; i < Y; i++) {
        if (i%2 != 0) {
            Soma += i;
        }
    }

    printf("%i\n", Soma);

    return 0;
}
