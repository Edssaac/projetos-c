#include <stdio.h>

int main() {

    int N, caso, numeros, i, j;

    caso = 1;
    while ( scanf("%d", &N) != EOF )
    {
        numeros=1;

        for ( i=0; i<=N; i++ )
        {
            for ( j=1; j<=i; j++ )
            {
                numeros++;
            }
        }

        if (N == 0) {
            printf("Caso %d: 1 numero\n", caso);
        }
        else {
            printf("Caso %d: %d numeros\n", caso, numeros);
        }

        printf("0");

        for ( i=0; i<=N; i++ )
        {
            for ( j=1; j<=i; j++ )
            {
                printf(" %d", i);
                numeros++;
            }
        }

        printf("\n\n");
        caso++;
    }

    return 0;
}
