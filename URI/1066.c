#include <stdio.h>

int main() {

    int valores[5];
    int i, pares, impares, positivos, negativos;

    pares = impares = positivos = negativos = 0;


    for (i=0; i<5; i++) {
        scanf("%i", &valores[i]);

        if (valores[i]%2 == 0) {pares++;}
        if (valores[i]%2 != 0) {impares++;}
        if (valores[i] > 0) {positivos++;}
        if (valores[i] < 0) {negativos++;};

    }


    printf("%i valor(es) par(es)\n", pares);
    printf("%i valor(es) impar(es)\n", impares);
    printf("%i valor(es) positivo(s)\n", positivos);
    printf("%i valor(es) negativo(s)\n", negativos);

    return 0;
}
