#include <stdio.h>

int main(void)
{
    long long int X;

    scanf("%llu", &X);

    if ( X%2 == 0 )
        printf("%llu\n", (X+2) );
    else
        printf("%llu\n", (X+1) );


    return 0;
}
