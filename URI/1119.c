#include <stdio.h>

typedef struct
{
    int anterior;
    int valor;
    int proximo;
} Fila;

int main()
{
    int N, k, m;

    while (1)
    {
        Fila Candidatos[21];
        int i, p1, p2;
        int aux;

        scanf("%d %d %d", &N, &k, &m);

        if ( !(N||k||m) )
            break;

        for (i = 1; i <= N; ++i)
        {
            Candidatos[i].valor = i;
            Candidatos[i].anterior = (i==1) ? N : i-1;
            Candidatos[i].proximo  = (i==N) ? 1 : i+1;
        }

        Candidatos[0].proximo = 1;
        Candidatos[N+1].anterior = N;

        aux = N;
        p1 = 0;
        p2 = N + 1;

        while (1)
        {
            for ( i=0; i<k; i++ )
                p1 = Candidatos[p1].proximo;
            for ( i=0; i<m; i++ )
                p2 = Candidatos[p2].anterior;

            printf("%3d", Candidatos[p1].valor);
            aux--;
            if (p1 != p2)
            {
                printf("%3d", Candidatos[p2].valor);
                aux--;
            }

            if (Candidatos[p1].anterior == p2 || Candidatos[p1].proximo == p2)
            {
                if (Candidatos[p1].anterior == p2)
                {
                    Candidatos[p1].anterior = Candidatos[p2].anterior;
                    Candidatos[p2].proximo = Candidatos[p1].proximo;
                }
                if (Candidatos[p1].proximo == p2)
                {
                    Candidatos[p1].proximo = Candidatos[p2].proximo;
                    Candidatos[p2].anterior = Candidatos[p1].anterior;
                }
            }

            Candidatos[Candidatos[p1].anterior].proximo = Candidatos[p1].proximo;
            Candidatos[Candidatos[p1].proximo].anterior = Candidatos[p1].anterior;

            if (p1 != p2)
            {
                Candidatos[Candidatos[p2].anterior].proximo = Candidatos[p2].proximo;
                Candidatos[Candidatos[p2].proximo].anterior = Candidatos[p2].anterior;
            }

            if ( aux>0 )
                putchar(',');
            else
            {
                putchar('\n');
                break;
            }
        }
    }

    return 0;
}
