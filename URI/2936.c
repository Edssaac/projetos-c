#include <stdio.h>

int main() {

    int convidados[5] = {300, 1500, 600, 1000, 150} , porcoes[5], i, kg;


    kg=0;
    for ( i=0; i<5; i++ )
    {
        scanf("%d", &porcoes[i]);

        kg+= porcoes[i]*convidados[i];
    }

    printf("%d\n", kg+225);


    return 0;
}
