#include <stdio.h>

int main() {

    int Regua[4], i, Tomadas;
    Tomadas = 0;


    for (i=0; i<4; i++) {
        scanf("%i", &Regua[i]);
    }

    for (i=0; i<3; i++) {
        Tomadas+=Regua[i]-1;
    }

    Tomadas+= Regua[3];
    printf("%i\n", Tomadas);

    return 0;
}
