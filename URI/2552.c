#include <stdio.h>

int main() {

    int n, m, v, i, j;

    while ( scanf("%i %i", &n, &m) != EOF )
    {
        int ma[n][m];
        for ( i = 0; i < n; i++ )
            for ( j = 0; j < m; j++ )
                scanf("%i", &ma[i][j]);

        for ( i = 0; i < n; i++ )
        {
            for ( j = 0; j < m; j++ )
            {
                if ( ma[i][j] )
                    printf("9");
                else
                {
                    v = 0;
                    if (i)
                        v += ma[i-1][j];
                    if (j)
                        v += ma[i][j-1];
                    if (i != n-1)
                        v += ma[i+1][j];
                    if (j != m-1)
                        v += ma[i][j+1];
                    printf("%i", v);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
