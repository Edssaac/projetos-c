#include <stdio.h>

int main() {

    int idade_dias, ano, mes, dia;
    ano = mes = dia = 0;

    scanf("%i", &idade_dias);

    while (idade_dias > 0) {

        if (idade_dias > 0) {
            dia += 1;
            idade_dias -= 1;
        }

        if (dia >= 30) {
            mes += 1;
            dia = 0;
        }

        if (mes >= 12 && dia == 5) {
            ano += 1;
            mes = 0;
            dia = 0;
        }
    }

    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);

    return 0;
}
