#include <stdio.h>


int main() {

    int BolinhasPossuidas, Galhos, BolinhasNecessarias;


    scanf("%i", &BolinhasPossuidas);
    scanf("%i", &Galhos);

    if (Galhos%2 != 0) { Galhos--; }

    BolinhasNecessarias = Galhos/2;

    if (BolinhasPossuidas >= BolinhasNecessarias)
    {
        printf("Amelia tem todas bolinhas!\n");
    }
    else
    {
        printf("Faltam %i bolinha(s)\n", (BolinhasNecessarias - BolinhasPossuidas) );
    }


    return 0;
}
