#include <stdio.h>

int main(void)
{
    int N, S, i, interacao, menorValor;

    int j = -1;

    printf("%d", -j);

    scanf("%d %d", &N, &S);
    menorValor = S;
    for ( i=0; i<N; i++ )
    {
        scanf("%d", &interacao);

        S += interacao;

        if ( menorValor>S )
            menorValor = S;
    }

    printf("%d\n", menorValor);

    return 0;
}
