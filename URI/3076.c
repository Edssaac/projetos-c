#include <stdio.h>

int main() {

    long long int ano;


    while ( scanf("%lld", &ano) != EOF )
    {
        if ( ano%100==0 ) printf ("%lld\n", ano/100);
        else printf("%lld\n", (ano/100)+1 );
    }


    return 0;
}
