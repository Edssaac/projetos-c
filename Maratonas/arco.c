#include <stdio.h>
#include <math.h>

float d2p(float x, float y)
{
    float d = sqrt( pow(x-0, 2.0)+pow(y-0, 2.0) );

    return d;
}

int main()
{
    int N, n, X, Y, p;
    float flechas[100000];
    long long int pontos=0;

    scanf("%d", &N);

    for ( n=0; n<N; n++ )
    {
        scanf("%d %d", &X, &Y);
        flechas[n] = d2p(X, Y);

        for ( p=0; p<n; p++ )
        {
            if ( flechas[p] <= flechas[n] )
            {
                pontos++;
            }
        }
    }

    printf("%lld\n", pontos);


    return 0;
}
