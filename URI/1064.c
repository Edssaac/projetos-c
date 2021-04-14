#include <stdio.h>

int main() {

    float valores[6], acumulo, media;
    int i, quantidade;

    acumulo = quantidade = 0;

    for (i=0; i<6; i++) {
        scanf("%f", &valores[i]);

        if (valores[i] > 0) {
            acumulo += valores[i];
            quantidade++;
        }

    }

    media = acumulo/quantidade;

    printf("%i valores positivos\n", quantidade);
    printf("%.1f\n", media);

    return 0;
}
