#include <stdio.h>

int main() {

    char Operacao;
    float M[12][12], Soma, Media;
    int linha, coluna, coluna_limite;
    Soma = Media = 0;


    scanf(" %c", &Operacao);

    for (linha=0; linha<12; linha++) {
        for (coluna=0; coluna<12; coluna++) {
            scanf("%f", &M[linha][coluna]);
        }
    }

    coluna_limite = 10;
    for (linha=0; linha<11; linha++) {
        for (coluna=0; coluna<=coluna_limite; coluna++) {
            Soma+=M[linha][coluna];
        }

        coluna_limite--;
    }

    switch (Operacao){

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
