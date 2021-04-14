#include <stdio.h>

int main() {

    int HoraInicial, MinutoInicial, HoraFinal, MinutoFinal;
    scanf("%d%d%d%d", &HoraInicial, &MinutoInicial, &HoraFinal, &MinutoFinal);


    if (MinutoFinal<MinutoInicial) {
        MinutoFinal += 60;
        HoraFinal -= 1;
        MinutoFinal -= MinutoInicial;

        if (HoraFinal<HoraInicial) {
            HoraFinal += 24;
            HoraFinal -= HoraInicial;
        }
        else {
            HoraFinal -= HoraInicial;
        }

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HoraFinal, MinutoFinal);
    }
    else if (HoraInicial == HoraFinal && MinutoInicial == MinutoFinal) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (MinutoFinal>MinutoInicial) {
        MinutoFinal -= MinutoInicial;

        if (HoraFinal < HoraInicial) {
            HoraFinal += 24;
            HoraFinal -= HoraInicial;
        }
        else {
            HoraFinal -= HoraInicial;
        }

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HoraFinal, MinutoFinal);
    }

    return 0;
}




//int main() {
//
//    int HoraInicial, MinutoInicial, HoraFinal, MinutoFinal;
//    int HorasPassadas, MinutosPassados;
//
//    scanf("%i %i %i %i", &HoraInicial, &MinutoInicial, &HoraFinal, &MinutoFinal);
//
//    HorasPassadas = HoraFinal - HoraInicial;
//    MinutosPassados = MinutoFinal - MinutoInicial;
//
//
//
//    if (HorasPassadas <= 0) {
//        HorasPassadas += 24;
//    }
//
//    if (MinutosPassados < 0) {
//        MinutosPassados += 60;
//        HorasPassadas -= 1;
//    }
//
//    if (HoraInicial==HoraFinal && MinutoInicial==MinutoFinal) {
//        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
//    }
//    else {
//        printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)", HorasPassadas, MinutosPassados);
//    }
//
//    return 0;
//}
