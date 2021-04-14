#include <stdio.h>
#include <string.h>

int main() {

    long int Elfos, numPresentes;
    int Horas, bonecos, arquitetos, musicos, desenhistas;
    char Nome[50], Equipe[30];


    scanf("%ld", &Elfos);
    numPresentes=bonecos=arquitetos=musicos=desenhistas=0;

    while ( Elfos>0 )
    {
        scanf("%s", Nome);
        scanf("%s", Equipe);
        scanf("%ld", &Horas);

        if ( strcmp( Equipe,"bonecos" )==0 )
            bonecos+=Horas;
        else if ( strcmp( Equipe,"arquitetos" )==0 )
            arquitetos+=Horas;
        else if ( strcmp( Equipe,"musicos" )==0 )
            musicos+=Horas;
        else if ( strcmp( Equipe,"desenhistas" )==0 )
            desenhistas+=Horas;

        Elfos--;
    }

    numPresentes += bonecos/8;
    numPresentes += arquitetos/4;
    numPresentes += musicos/6;
    numPresentes += desenhistas/12;

    printf("%ld\n", numPresentes);

    return 0;
}
