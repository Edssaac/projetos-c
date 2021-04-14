#include <stdio.h>

int main() {

    int Bolinhas, Galhos;


    scanf("%d %d", &Bolinhas, &Galhos);

    if ( Galhos%2 != 0 )
        Galhos--;

    if ( Bolinhas >= Galhos/2 )
        printf("Amelia tem todas bolinhas!\n");
    else
        printf("Faltam %d bolinha(s)\n", (Galhos/2)-Bolinhas );


    return 0;
}
