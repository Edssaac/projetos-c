//D - O Peso do Papai Noel
#include <stdio.h>

int main(void)
{
    float pesoInicial, pesoMaximo, kg;
    int cookies;

    scanf("%f %d %f", &pesoInicial, &cookies, &pesoMaximo);
    while( cookies-- )
    {
        scanf("%f", &kg);
        pesoInicial+=kg;
    }

    printf("%.2f\n", pesoInicial);
    printf( ((pesoInicial<=pesoMaximo) ? "ho ho ho\n" : "papai noel precisa fazer exercicios\n") );

    return 0;
}
