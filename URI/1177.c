#include <stdio.h>

int main() {

    int T, i, aux;
    int N[1000];


    scanf("%i", &T);
    aux=0;

    for (i=0; i<1000; i++) {

        if (aux == T) {aux=0;};

        N[i] = aux;
        aux++;
    }

    for (i=0; i<1000; i++) {
        printf("N[%i] = %i\n", i, N[i]);
    }


    return 0;
}
