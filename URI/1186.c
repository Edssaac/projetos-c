#include <stdio.h>

int main() {

    char Operacao;
    float M[12][12], Soma, Media;
    int linha, coluna, x;
    Soma = Media = 0;


    scanf(" %c", &Operacao);

    for (linha=0; linha<12; linha++) {
        for (coluna=0; coluna<12; coluna++) {
            scanf("%f", &M[linha][coluna]);
        }
    }

    x = 1;
    for (linha=11; linha>0; linha--) {
        for (coluna=x; coluna<12; coluna++) {
            Soma+=M[linha][coluna];
        }

        x++;
    }

    switch (Operacao) {
        case 'S':
            printf("%.1f\n", Soma);
            break;
        case 'M':
            Media = Soma/66.0;
            printf("%.1f\n", Media);
            break;
    }

    return 0;
}
