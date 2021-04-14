#include <stdio.h>

int main() {

    char Operacao;
    double M[12][12], Soma, Media;
    int linha, coluna, x, y;
    Soma = Media = 0;


    scanf(" %c", &Operacao);

    for (linha=0; linha<12; linha++) {
        for (coluna=0; coluna<12; coluna++) {
            scanf("%lf", &M[linha][coluna]);
        }
    }

    x=1;
    y=10;
    for (linha=0; linha<5; linha++) {

        for (coluna=x; coluna<=y; coluna++) {
            Soma+=M[linha][coluna];
        }

        x++;
        y--;
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
