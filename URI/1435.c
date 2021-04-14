#include <stdio.h>

int main() {

    int N;
    int linha, coluna, k, l, m, o, hn, a, b;


    while (1)
    {
        scanf("%i", &N);

        if (N == 0) {
            break;
        }

        int M[N][N];

        hn = N/2;

        if (N%2==1) {
            hn++;
        }

        a=0;
        b=N-1;

        for ( l=1; l<=hn; l++ ) {

            for ( linha=a; linha<=b; linha++ ) {
                for ( coluna=a; coluna<=b; coluna++) {
                    M[linha][coluna] = l;
                }
            }
            a++;
            b--;
        }

        for ( linha=0; linha<N; linha++ ) {
            for ( coluna=0; coluna<N; coluna++) {
                if (coluna==0) {
                    printf("%3d", M[linha][coluna]);
                }
                else {
                    printf(" %3d", M[linha][coluna]);
                }

            }
                printf("\n");
        }
            printf("\n");
    }


    return 0;
}
