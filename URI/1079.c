#include <stdio.h>

struct notas {

    float nota01, nota02, nota03;
    float media;

};

int main() {

    int Casos, i;

    scanf("%i", &Casos); //Lendo o valor do array;
    struct notas teste[Casos]; //Criando um array do nosso struct;



    for (i=0; i<Casos; i++) {
        scanf( "%f %f %f", &teste[i].nota01, &teste[i].nota02, &teste[i].nota03 ); //Lendo os valores

        teste[i].media = ( (teste[i].nota01 * 2) + (teste[i].nota02* 3) + (teste[i].nota03 * 5) ) / 10; //Processando as medias;
    }


    for (i=0; i<Casos; i++) {
        printf("%.1f\n", teste[i].media); //Imprimindo as medias;
    }


    return 0;
}
