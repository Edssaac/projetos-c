#include <stdio.h>

int main() {

    struct dados {
        int dia, hh, mm, ss;
    };

    struct dados inicio;
    struct dados fim;

    int dias, horas, minutos, segundos;


    scanf("Dia %d", &inicio.dia);
    scanf("%d : %d : %d\n", &inicio.hh, &inicio.mm, &inicio.ss);

    scanf("Dia %d", &fim.dia);
    scanf("%d : %d : %d", &fim.hh, &fim.mm, &fim.ss);


    dias = fim.dia - inicio.dia;
    horas = fim.hh - inicio.hh;
    minutos = fim.mm - inicio.mm;
    segundos = fim.ss - inicio.ss;


    if (segundos < 0) {
        segundos += 60;
        minutos -= 1;
    }

    if (minutos < 0) {
        minutos += 60;
        horas -= 1;
    }

    if (horas < 0) {
        horas += 24;
        dias -= 1;
    }


    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
