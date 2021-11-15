#include <stdio.h>

typedef struct {
    char nome[30];
    int valor;
    int anterior, proximo;
} Lista;

int main()
{
    while (1)
    {
        int N, i, j;
        Lista Criancas[100];

        scanf("%d", &N);
        if (!N)
            break;

        for ( i=0; i<N; i++ )
        {
            scanf("%s %d", Criancas[i].nome, &Criancas[i].valor);

            Criancas[i].anterior = ((i - 1) % N + N) % N;
            Criancas[i].proximo = (i + 1) % N;
        }

        i=0;
        while (N--)
        {
            int valor = Criancas[i].valor;

            if ( valor%2 )
            {
                for ( j=0; j<valor; j++ )
                    i = Criancas[i].proximo;
            }
            else
            {
                for ( j=0; j<valor; j++ )
                    i = Criancas[i].anterior;
            }

            Criancas[Criancas[i].anterior].proximo = Criancas[i].proximo;
            Criancas[Criancas[i].proximo].anterior = Criancas[i].anterior;
        }
        i = Criancas[i].proximo;

        printf("Vencedor(a): %s\n", Criancas[i].nome);
    }

    return 0;
}
