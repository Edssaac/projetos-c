#include <stdio.h>

int main() {

    int trabalhadores[3], andar, minutos[3], i, aux;


    for ( andar=0; andar<3; andar++ )
        scanf("%d", &trabalhadores[andar]);

    minutos[0] = ( trabalhadores[2]*4 )+( trabalhadores[1]*2 );
    minutos[1] = ( trabalhadores[2]*2 )+( trabalhadores[0]*2 );
    minutos[2] = ( trabalhadores[0]*4 )+( trabalhadores[1]*2 );

    for ( andar=0; andar<3; andar++ )
        for ( i=andar; i<3; i++ )
            if ( minutos[andar] > minutos[i] )
            {
               aux = minutos[andar];
               minutos[andar] = minutos[i];
               minutos[i] = minutos[andar];
            }

    printf("%d\n", minutos[0] );


    return 0;
}
