#include <stdio.h>

int main()
{
    int a, b, c, d, e, f=1, g=2, h, linha=0, coluna=0, N, I, J;

    while(1)
    {
        scanf("%d", &N);
        if(N==0) break;
        else
        {
            int M[N][N];

            for( a=0;  a<N; a++ )
            {
                for( b=0; b<N; b++ )
                    M[a][b]=1;
            }

            I=N-1; J=N;
            for( e=0,f=1,g=2; e<I; e++ )
            {
                for( c=0,d=f; d<N; d++,c++ )
                    M[c][d]=g;
                f++; g++;
            }

            for( e=0,f=1,g=2; e<I; e++ )
            {
                for( c=f,d=0; c<N; d++,c++)
                    M[c][d]=g;
                f++; g++;
            }

            for( linha=0; linha<N; linha++ )
            {
                for( coluna=0; coluna<N; coluna++ )
                {
                    if(coluna==0)
                        printf("%3d",M[linha][coluna]);
                else printf(" %3d",M[linha][coluna]);
                }

                printf("\n");
            }

            printf("\n");
        }
    }

    return 0;
}
