#include <stdio.h>

int main() {

    int TotalFigurinhas, FigurinhasCompradas, i, j, x, y;

    scanf("%d", &TotalFigurinhas);
    scanf("%d", &FigurinhasCompradas);
    int album[FigurinhasCompradas];
    x=0;

    for ( i=0; i<FigurinhasCompradas; i++ )
        scanf("%d", &album[i]);

    for ( i=0; i<FigurinhasCompradas; i++ )
    {
        y=0;
        for ( j=i+1; j<FigurinhasCompradas; j++ )
            if ( album[i] == album[j] ) {
                y++;
            }

        if (y==0) x++;
    }

    printf("%d\n", TotalFigurinhas-x);


    return 0;
}
