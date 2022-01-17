//C - Moedas do Noel
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    float compra, pagamento;
    int moedas[5];
    memset( moedas, 0, sizeof(moedas));

    scanf("%f %f", &compra, &pagamento);
    int troco = ((int)ceil(100*(pagamento-compra)))%100;

    while (troco)
    {
        if (troco >= 50)
        {
            troco-=50;moedas[0]++;
        }
        else if (troco >= 25)
        {
            troco-=25;moedas[1]++;
        }
        else if (troco >= 10)
        {
            troco-=10;moedas[2]++;
        }
        else if (troco >= 5)
        {
            troco-=5;moedas[3]++;
        }
        else if (troco >= 1)
        {
            troco--;moedas[4]++;
        }

    }

    printf("%d moeda(s) de 50\n", moedas[0]);
    printf("%d moeda(s) de 25\n", moedas[1]);
    printf("%d moeda(s) de 10\n", moedas[2]);
    printf("%d moeda(s) de 5\n", moedas[3]);
    printf("%d moeda(s) de 1\n", moedas[4]);

    return 0;
}
