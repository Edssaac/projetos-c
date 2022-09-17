#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x, float *termos) {
    return (termos[4] * pow(x, 4) + termos[3] * pow(x, 3) + termos[2] * pow(x, 2) + termos[1] * x + termos[0]);
}

int main() {
    float boca, calado, termo[5], espX, aCinza;
    int grau, pontos;

    scanf("%f %f", &boca, &calado);
    scanf("%d", &grau);
    scanf("%f %f %f %f %f", &termo[4], &termo[3], &termo[2], &termo[1], &termo[0]);
    scanf("%d", &pontos);

    espX = boca / (2 * (pontos - 1));
    aCinza = 2 * (espX/3);


    printf("%f", aCinza);



    return 0;
}

