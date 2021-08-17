#include <stdio.h>
#include <stdlib.h>

#define MAX 2001

int main(void)
{
    int numeros[MAX] = {0};
    int N, i, x;
    scanf("%d", &N);


    for( i=0; i<N ; i++ )
    {
        scanf("%d", &x);
        numeros[x]++;
    }

    for( i=0; i<=MAX; i++ )
        if( numeros[i] > 0 )
        {
            printf("%d aparece %d vez(es)\n", i, numeros[i]);
        }

    return 0;
}
