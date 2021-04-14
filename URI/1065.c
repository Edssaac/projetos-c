#include <stdio.h>

int main() {

    int valores[5];
    int i, quantidade;

    quantidade = 0;


    for (i=0; i<5; i++) {
        scanf("%i", &valores[i]);

        if (valores[i] % 2 == 0) {
            quantidade++;
        }

    }


    printf("%i valores pares\n", quantidade);

    return 0;
}
