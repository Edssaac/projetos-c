#include <stdio.h>

int main() {
    int horas_viagem, km_viagem;
    float litros;

    scanf("%i%i", &horas_viagem, &km_viagem);

    litros = horas_viagem*km_viagem/12.0;

    printf("%.3f\n", litros );

    return 0;
}
