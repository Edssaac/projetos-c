#include <stdio.h>

int main() {

    int linha, coluna, k, N, M[72][72];


    while ( scanf("%d", &N) != EOF ) {

        k = N-1;

        for ( linha=0; linha<N; linha++ ) {

            for ( coluna=0; coluna<N; coluna++ ) {
                if (linha==coluna) { M[linha][coluna] = 1; }
                else { M[linha][coluna] = 3; }
                if (coluna==k) { M[linha][k] = 2; }
            }
            k--;
        }
        for ( linha=0; linha<N; linha++ ) {
            for ( coluna=0; coluna<N; coluna++ ) {
                printf("%d", M[linha][coluna]);
            }
            printf("\n");
        }
    }


    return 0;
}
