#include <stdio.h>

int main() {

    int treinos, duracao, distancia, i;
    double recorde, tempo;

    while ( scanf("%d", &treinos) != EOF )
    {
        recorde = 0;

        for ( i=0; i<treinos; i++ )
        {
            scanf("%d %d", &duracao, &distancia);
            tempo = (double) distancia/duracao;

            if (tempo>recorde)
            {
                printf("%d\n", i+1);
                recorde = tempo;
            }
        }
    }

    return 0;
}
