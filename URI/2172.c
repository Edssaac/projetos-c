#include <stdio.h>

int main() {

    long long int X, M;


    do
    {
        scanf("%lld", &X);
        scanf("%lld", &M);
        if ( X!=0&&M!=0 )
        {
           printf("%lld\n", (X*M) );
        }

    } while (X!=0&&M!=0);

    return 0;
}
