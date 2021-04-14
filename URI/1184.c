#include <stdio.h>

int main() {

    char Operacao;
    float M[12][12], Soma, Media;
    int i, j, Coluna;
    Soma = Media = 0;


    scanf(" %c", &Operacao);

    for (i=0; i<12; i++) {
        for (j=0; j<12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    Coluna = 1;
    for (i=1; i<12; i++) {

        for (j=0; j<Coluna; j++) {
            Soma+=M[i][j];
        }

        Coluna++;
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
