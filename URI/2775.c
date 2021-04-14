#include <stdio.h>

int main() {


    int pacotes, i, j, aux, segs;

    scanf("%d", &pacotes);

    int pacote[pacotes];
    int tempo[pacotes];
    segs = 0;

    for ( i=0; i<pacotes; i++ )
        scanf("%d", &pacote[i]);

    for ( i=0; i<pacotes; i++ )
        scanf("%d", &tempo[i]);

    for ( i=0; i<pacotes; i++ )
        for ( j=i; j<pacotes; j++ )
            if ( pacote[i]>pacote[j] && (i+1==j||i-1==j) )
            {
                aux = pacote[i];
                pacote[i] = pacote[j];
                pacote[j] = aux;

                aux = tempo[i];
                tempo[i] = tempo[j];
                tempo[j] = aux;

                segs += tempo[i]+tempo[j];
            }

//    for ( i=0; i<pacotes; i++ )
//        printf("%d\n", pacote[i]);

    printf("%d\n", segs);

    return 0;
}
