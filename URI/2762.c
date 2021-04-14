#include <stdio.h>

int main() {

    long long int a;
    long int b;


    while ( scanf("%lld.", &a ) != EOF )
    {
        scanf("%ld", &b);
        printf("%ld.%lld\n", b, a);
    }

    return 0;
}
