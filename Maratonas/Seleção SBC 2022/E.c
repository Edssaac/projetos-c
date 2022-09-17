#include <stdio.h>
#include <stdlib.h>

int ordenar(const void *x, const void*b) {
    return (*(int*)x - *(int*)b);
}

int main(void) {

    int t, c=0, i, j;

    scanf("%d", &t);

    for (i=0; i<t; i++) {
        c++;
        int salarios[3];

        for (j=0; j<3; j++) {
            scanf("%d", &salarios[j]);
        }

        qsort(salarios, 3, sizeof(int), ordenar);

        printf("Case %d: %d\n", c, salarios[1]);
    }

    return 0;
}
