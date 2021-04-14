#include <stdio.h>

int main() {

    int N[10];
    int i, valor;


    scanf("%i", &valor);

    for (i=0; i<10; i++) {

        N[i] = valor;
        valor*=2;

    }


    for (i=0; i<10; i++) {

        printf("N[%i] = %i\n", i, N[i]);

    }


    return 0;
}
