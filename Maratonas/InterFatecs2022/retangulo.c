#include <stdio.h>
#include <stdlib.h>

int main() {

    long int L, C;
    short int l, c, i, j = 1;

    scanf("%ld %ld", &L, &C);

    long int matriz[L][C];

    for(i=0; i<L; i++) {
        matriz[i][0] = 3;
    }

    for(i=0; i<C; i++) {
        matriz[L-1][i] = 2;
    }

    for(i=0; i<C; i++) {
        matriz[i][C-1] = 1;
    }

    for(i=0; i<C; i++) {
        matriz[0][i] = 0;
    }

    for(i=1; i<L-1; i++) {
        for (j=1; j< C-1; j++) {
            matriz[i][j] = matriz[i-1][j] + matriz[i][j-1] + matriz[i-1][j-1];
        }
    }

    scanf("%hd %hd", &l, &c);
    printf("%ld\n", matriz[l-1][c-1]);

    return 0;
}
