#include <stdio.h>

int main() {

    char Operacao;
    double M[12][12], Soma, Media;
    int linha, coluna, y;
    Soma = Media = 0;


    scanf(" %c", &Operacao);

    for (linha=0; linha<12; linha++) {
        for (coluna=0; coluna<12; coluna++) {
            scanf("%lf", &M[linha][coluna]);
        }
    }

    y=0;
    for (linha=1; linha<11; linha++) {

        for (coluna=0; coluna<=y; coluna++) {
            Soma+=M[linha][coluna];
        }

        if (linha <= 4) {
            y++;
        }
        else if (linha >=6) {
            y--;
        }
    }

    switch (Operacao) {
        case 'S':
            printf("%.1lf\n", Soma);
            break;
        case 'M':
            Media = Soma/30.0;
            printf("%.1lf\n", Media);
            break;
    }

    return 0;
}
