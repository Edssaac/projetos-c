#include <stdio.h>

int main(void)
{
    int N, M=7;


    scanf("%d", &N);

    if ( N>=11 && N<=30 )
    {
        M += (N-10);
    }
    else if ( N>=31 && N<=100 )
    {
        M += 20 + (N-30)*2;
    }
    else if ( N>=101 )
    {
        M += 20 + 140 + (N-100)*5;
    }

    printf("%d\n", M);

    return 0;
}
