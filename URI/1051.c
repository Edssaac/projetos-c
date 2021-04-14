#include <stdio.h>

int main() {

    float Salario, Imposto;
    Imposto = 0;

    scanf("%f", &Salario);

    if (Salario>0.00 && Salario<=2000.00) {
        printf("Isento\n");

        return 0;
    }
    else if (Salario>=2000.01 && Salario<=3000.00) {
        Imposto = (Salario-2000.00) * 0.08;
    }
    else if (Salario>=3000.01 && Salario<=4500.00) {
        Imposto = (1000*0.08);
        Imposto += (Salario-3000.00) * 0.18;
    }
    else if (Salario>4500.00) {
        Imposto = (1000*0.08);
        Imposto += (1500*0.18);
        Imposto += (Salario-4500.00) * 0.28; //= 20.00
    }

    printf("R$ %.2f\n", Imposto);
    return 0;
}
