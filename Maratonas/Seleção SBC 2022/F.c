#include <stdio.h>
#include <stdlib.h>

int ordenar(const void *x, const void*b) {
    return (*(int*)x - *(int*)b);
}

int main(void) {

    int t, n, i, j, caso=0;

    scanf("%d", &t);

    for (i=0; i<t; i++) {
        scanf("%d", &n);
        int velocidades[n];
        caso++;

        for (j=0; j<n; j++) {
            scanf("%d", &velocidades[j]);
        }

        qsort(velocidades, n, sizeof(int), ordenar);

        printf("Caso %d: %d\n", caso, velocidades[n-1]);
    }

    return 0;
}
