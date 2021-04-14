#include <stdio.h>
#include <stdlib.h>

int main() {

    int estoque[3], pedidos[3], i, falta;
    falta = 0;

    for ( i=0; i<3; i++ )
    {
        scanf("%d", &estoque[i]);
    }

    for ( i=0; i<3; i++ )
    {
        scanf("%d", &pedidos[i]);

       if ( estoque[i] < pedidos[i] ) falta+=estoque[i]-pedidos[i];
    }


    printf("%d\n", abs(falta));



    return 0;
}
