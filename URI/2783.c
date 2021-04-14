#include <stdio.h>

int main() {

    int TotalFigurinhas, FigurinhasCarimbadas, QuantidadeComprada, i, j, x, y;

    scanf("%d %d %d", &TotalFigurinhas, &FigurinhasCarimbadas, &QuantidadeComprada);
    int Carimbadas[FigurinhasCarimbadas];
    x = FigurinhasCarimbadas;

    for ( i=0; i<FigurinhasCarimbadas; i++ )
        scanf("%d", &Carimbadas[i]);

    for ( i=0; i<QuantidadeComprada; i++ )
    {
        scanf("%d", &y);

        for ( j=0; j<FigurinhasCarimbadas; j++ )
            if ( Carimbadas[j] == y )
            {
                x--;
                Carimbadas[j] = 0;
            }
    }

    printf("%d\n", x);


    return 0;
}
