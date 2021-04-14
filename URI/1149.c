#include <stdio.h>

int main() {

    int A, N, Soma, i;
    Soma=0;


    scanf("%d", &A);

    do {
        scanf("%d", &N);
    } while (N <= 0);

    for (i=0; i<N; i++) {
        Soma += A + i;
    }

    printf("%d\n", Soma);

    return 0;
}
