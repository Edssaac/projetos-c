#include <stdio.h>

int main() {

    char Operacao;
    float M[12][12], Soma, Media;
    int i, j, coluna;
    Soma = Media = 0;


    //Lendo o tipo de operação:
    scanf(" %c", &Operacao);

    //Lendo os dados da matriz:
    for (i=0; i<12; i++) {
        for (j=0; j<12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    //Somando a diagonal superior da matriz:
    coluna = 1;
    for (i=0; i<=11; i++) {
        for (j=coluna; j<=11; j++) {
            Soma+=M[i][j];
        }
        coluna++;
    }

    //Gerando a resposta com base na opção escolhida:
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

