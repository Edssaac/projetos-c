#include <stdio.h>
#include <string.h>

int main() {

    int testes, i, j, rgb[3], resultado;
    char destino[5];
    scanf("%d", &testes);
    int casos[testes];


    for ( i=0; i<testes; i++ )
    {
        scanf("%s", destino);
        resultado=0;

        for ( j=0; j<3; j++ )
            scanf("%d", &rgb[j]);

        if ( strcmp(destino,"eye") == 0 )
        {
            resultado = ( rgb[0]*0.30 ) + ( rgb[1]*0.59 ) + ( rgb[2]*0.11 );
        }
        else if ( strcmp(destino,"mean") == 0 )
        {
            resultado = (rgb[0]+rgb[1]+rgb[2])/3;
        }
        else if ( strcmp(destino,"max") == 0 )
        {
            for ( j=0; j<3; j++ )
                if ( resultado<rgb[j] ) resultado=rgb[j];
        }
        else if ( strcmp(destino,"min") == 0 )
        {
            resultado=255;
            for ( j=0; j<3; j++ )
                if ( resultado>rgb[j] ) resultado=rgb[j];
        }

        casos[i] = resultado;
    }

    for ( i=0; i<testes; i++ )
    {
        printf("Caso #%d: %d\n", i+1, casos[i]);
    }

    return 0;
}
