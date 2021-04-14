#include <stdio.h>

int main() {

    int casos, i;
    long long int poder;

    while ( scanf("%d", &casos) != EOF )
    {
        for ( i=0; i<casos; i++ )
        {
            scanf("%lld", &poder);
            printf( poder>8000 ? "Mais de 8000!\n" : "Inseto!\n" );
        }
    }


    return 0;
}
