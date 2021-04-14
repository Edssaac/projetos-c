#include <stdio.h>
#include <stdlib.h>

struct dados {
    long long int ano;
};

int main() {

    int casos, i, ano_atual, transcorridos;
    scanf("%d", &casos);
    struct dados T[casos];
    ano_atual = 2015;


    for ( i=0; i<casos; i++ )
    {
        scanf("%lld", &T[i].ano);
    }

    for ( i=0; i<casos; i++ )
    {
        transcorridos = ano_atual - T[i].ano;

        if (transcorridos > 0)
        {
            printf("%d D.C.\n", transcorridos);
        }
        else
        {
            transcorridos = abs(transcorridos);
            printf("%d A.C.\n", transcorridos+1);
        }
    }

    return 0;
}
