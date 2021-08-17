#include <stdio.h>

int main(void)
{
    long long int N, i, estrelasAtacadas=0, carneirosRestantes=0;
    scanf("%llu", &N);

    long long int ovelhas[N], ovelhax[N];

    for ( i=0; i<N; i++ )
    {
        scanf("%llu", &ovelhas[i]);
        ovelhax[i]=0;
    }

    i=0;
    while ( i>=0 && i<N )
    {
        if ( ovelhas[i]==0 )
            i--;
        else
        {
            ovelhas[i]--;
            ovelhax[i] = 1;

            if ( ovelhas[i] & 1 )
                i--;
            else
                i++;
        }
    }

    for ( i=0; i<N; i++ )
    {
        carneirosRestantes += ovelhas[i];

        if ( ovelhax[i] )
            estrelasAtacadas++;
    }

    printf("%llu %llu\n", estrelasAtacadas, carneirosRestantes);

    return 0;
}
