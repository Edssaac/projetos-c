#include <stdio.h>

int main() {

    //Declarando variaveis necessarias:
    int HoraInicial, HoraFinal, HorasPassadas;

    //Lendo valores:
    scanf("%i %i", &HoraInicial, &HoraFinal);

    //Descobrindo quantas horas passou:
    HorasPassadas = HoraFinal - HoraInicial;

    //Fazendo tratamento de horas:
    if (HorasPassadas <= 0) {
        HorasPassadas += 24;
    }

    //Imprimindo resultado:
    printf("O JOGO DUROU %i HORA(S)\n", HorasPassadas);

    return 0;
}
