#include <stdio.h>

int main() {
    int num_funcionario, horas_trabalhadas;
    float valor_hora;

    scanf("%i %i %f", &num_funcionario, &horas_trabalhadas, &valor_hora);

    printf("NUMBER = %i\nSALARY = U$ %.2f\n", num_funcionario, (horas_trabalhadas*valor_hora) );

    return 0;
}
