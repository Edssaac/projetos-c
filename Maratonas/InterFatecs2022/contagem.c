#include <stdio.h>
#include <stdlib.h>


int ordena(const void *n1, const void *n2) {
    int *x = (int*)n1;
    int *y = (int*)n2;

    if (x < y)
        return -1;
    if (x == y)
        return 0;

    return 1;
}

int main() {

    int N, ultimo, i, j, errou = 0;

    scanf("%d", &N);
    int vetor[N];

    for (i=0; i<N; i++) {
        scanf("%d", &vetor[i]);
        ultimo = vetor[i];
    }

    qsort(vetor, N, sizeof(int), ordena);

    int existe;
    for(j=1; j<ultimo; j++) {
        existe = 0;

        for(i=0; i<N; i++) {
            if (vetor[i]==j) {
                existe = 1;
                break;
            }
        }

        if (existe == 0) {
            errou = 1;
            printf("%d\n", j);
        }
    }

    if (errou == 0) {
        printf("bom trabalho\n");
    }

    return 0;
}

