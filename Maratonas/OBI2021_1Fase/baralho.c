#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct baralho
{
    int cartas[13];
    int p;
    int f;
};

int main(void)
{
    char entrada[53], aux[4];
    int i;
    struct baralho Copas, Espadas, Ouros, Paus;

    int brx[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    Copas.p=0;
    Espadas.p=0;
    Ouros.p=0;
    Paus.p=0;

    scanf("%s", entrada);
    for ( i=0; i<strlen(entrada); i+=3 )
    {
        strncpy( aux, &entrada[i], 3 );

        switch ( aux[2] )
        {
            case 'C':
                Copas.cartas[Copas.p] = atoi(aux);
                Copas.p++;
                break;
            case 'E':
                Espadas.cartas[Espadas.p] = atoi(aux);
                Espadas.p++;
                break;
            case 'U':
                Ouros.cartas[Ouros.p] = atoi(aux);
                Ouros.p++;
                break;
            case 'P':
                Paus.cartas[Paus.p] = atoi(aux);
                Paus.p++;
                break;
        }
    }

    int j, c=0;
    for ( i=0; i<Copas.p; i++ )
    {
        for ( j=Copas.p-1; j>=0; j-- )
            if ( Copas.cartas[i] == brx[j] )
            {
                c++;
            }
    }
    Copas.f = (13 - c );

    c=0;
    for ( i=0; i<Espadas.p; i++ )
    {
        for ( j=Espadas.p-1; j>=0; j-- )
            if ( Espadas.cartas[i] == brx[j] )
            {
                c++;
            }
    }
    Espadas.f = (13 - c );


    c=0;
    for ( i=0; i<Ouros.p; i++ )
    {
        for ( j=Ouros.p-1; j>=0; j-- )
            if ( Ouros.cartas[i] == brx[j] )
            {
                c++;
            }
    }
    Ouros.f = (13 - c );


    c=0;
    for ( i=0; i<Paus.p; i++ )
    {
        for ( j=Paus.p-1; j>=0; j-- )
            if ( Paus.cartas[i] == brx[j] )
            {
                c++;
            }
    }
    Paus.f = (13 - c );



    ///Copas:
    printf("%d\n", Copas.f);
    ///Espadas:
    printf("%d\n", Espadas.f);
    ///Ouros:
    printf("%d\n", Ouros.f);
    ///Paus:
    printf("%d\n", Paus.f);


    return 0;
}

