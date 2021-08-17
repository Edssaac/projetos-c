#include <stdio.h>

int main(void)
{
    int comprimentoEstrada, distanciaPedagios, custoKM, valorPedagio, gasto;


    scanf("%d %d", &comprimentoEstrada, &distanciaPedagios);
    scanf("%d %d", &custoKM, &valorPedagio);

    gasto = comprimentoEstrada * custoKM;
    gasto += (comprimentoEstrada/distanciaPedagios) * valorPedagio;

    printf("%d\n", gasto );


    return 0;
}
