#include <stdio.h>


int main() {

    float Salario, NovoSalario, Reajuste;
    int Percentual;

    scanf("%f", &Salario);

    if (Salario <= 400.00) {
        Percentual = 15;
    }
    else if (Salario <= 800.00) {
        Percentual = 12;
    }
    else if (Salario <= 1200.00) {
        Percentual = 10;
    }
    else if (Salario <= 2000.00) {
        Percentual = 7;
    }
    else if (Salario > 2000.00) {
        Percentual = 4;
    }



    Reajuste = (Percentual/100.00) * Salario;
    NovoSalario = Salario+Reajuste;

    printf("Novo salario: %.2f\n", NovoSalario);
    printf("Reajuste ganho: %.2f\n", Reajuste);
    printf("Em percentual: %i %%\n", Percentual);

    return 0;
}
