#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, *V, i;
    scanf("%d", &N);
    V = (int*) malloc( N * sizeof(int) );

    for ( i=0; i<N; i++ )
        scanf("%d", &V[i]);

    for ( i=0; i<N; i++ )
        printf("resposta %d: %d\n", i+1, V[i] );

    return 0;
}
