#include <stdio.h>
#include <string.h>

int main() {

    struct escolhas {
        char variavel[15];
    };

    struct escolhas opcoes[3];
    int i;


    for (i=0; i<3; i++) {

        fflush(stdin); //Limpando o buffer;
        gets(opcoes[i].variavel); //Lendo os dados;

    }


    if ( strcmp(opcoes[0].variavel , "vertebrado") == 0) {

        if ( strcmp(opcoes[1].variavel , "ave") == 0) {

            if ( strcmp(opcoes[2].variavel , "carnivoro") == 0) { printf("aguia\n"); }
            else if ( strcmp(opcoes[2].variavel , "onivoro") == 0 ){ printf("pomba\n"); }

        } else if ( strcmp(opcoes[1].variavel , "mamifero") == 0 ){

            if ( strcmp(opcoes[2].variavel , "onivoro") == 0) { printf("homem\n"); }
            else if ( strcmp(opcoes[2].variavel , "herbivoro") == 0 ){ printf("vaca\n"); }

        }

    } else if ( strcmp(opcoes[0].variavel , "invertebrado") == 0 ){

        if ( strcmp(opcoes[1].variavel , "inseto") == 0) {

            if ( strcmp(opcoes[2].variavel , "hematofago") == 0) { printf("pulga\n"); }
            else if ( strcmp(opcoes[2].variavel , "herbivoro") == 0 ){ printf("lagarta\n"); }

        } else if ( strcmp(opcoes[1].variavel , "anelideo") == 0 ){

            if ( strcmp(opcoes[2].variavel , "hematofago") == 0) { printf("sanguessuga\n"); }
            else if ( strcmp(opcoes[2].variavel , "onivoro") == 0 ){ printf("minhoca\n"); }

        }

    }

//    for (i=0; i<3; i++) {
//        printf("%s", opcoes[i].variavel);
//    }

    return 0;
}
