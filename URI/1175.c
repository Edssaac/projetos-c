#include <stdio.h>

int main() {

    int N[20];
    int i, x, aux;
    x = 19;

    for (i=0; i<20; i++) {
        scanf("%i", &N[i]);
    }


    for (i=0; i<10; i++) {

        aux = N[i];
        N[i] = N[x];
        N[x] = aux;

        x--;

    }

    for (i=0; i<20; i++) {
        printf("N[%i] = %i\n", i, N[i]);
    }


    return 0;
}
