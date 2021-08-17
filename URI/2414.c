#include <stdio.h>

int main(void)
{
    int x, maior=0;

    do
    {
        scanf("%d", &x);
        if ( x > maior )
            maior = x;

    } while ( x!=0 );

    printf("%d\n", maior);

    return 0;
}
