#include <stdio.h>

int main() {

    int x, y, aux, i, soma;

    soma = 0;

    scanf("%i %i", &x, &y);

    if (x > y) {
        aux = y;
        y = x;
        x = aux;
    }

    for (i=x; i<=y; i++)
    {
        if (i % 13 != 0) {soma+=i;}
    }

    printf("%i\n", soma);

    return 0;
}
