#include <stdio.h>


int main() {

    int valores[15], pares[5], impares[5];
    int i, k, par, impar;
    par = impar = 0;


    for (i=0; i<15; i++) {
        scanf("%i", &valores[i]);
    }

    for (i=0; i<15; i++) {

        if ( valores[i] % 2 == 0 ) {
            pares[par] = valores[i];
            par++;
        }

        else if ( valores[i] % 2 != 0 ) {
            impares[impar] = valores[i];
            impar++;
        }

        if (par == 5) {
            par = 0;

            for (k=0; k<5; k++) {
                printf("par[%i] = %i\n", k, pares[k]);
            }
        }

        if (impar == 5) {
            impar = 0;

            for (k=0; k<5; k++) {
                printf("impar[%i] = %i\n", k, impares[k]);
            }
        }

    }

    if (impar < 5) {
        for (k=0; k<impar; k++) {
            printf("impar[%i] = %i\n", k, impares[k]);
        }
    }

    if (par < 5) {
        for (k=0; k<par; k++) {
            printf("par[%i] = %i\n", k, pares[k]);
        }
    }

    return 0;
}
