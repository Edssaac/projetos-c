#include <stdio.h>

int main() {

    int N, i, a, b, aux;
    a = 0;
    b = 1;


    scanf("%i", &N);

    for (i=0; i<N; i++) {

        if (i == 0) {
            printf("%i ", a);
        }
        else if (i == 1) {
            printf("%i", b);
        }
        else {
            aux = b + a;
            a = b;
            b = aux;

            printf(" %i", aux);
        }

    }

    printf("\n");

    return 0;
}
