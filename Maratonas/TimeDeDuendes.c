#include <stdio.h>
#include <string.h>

struct cadastro {

    char nome[25];
    int idade;

};

int main() {

    int x, x2, aux;
    char straux[25];
    int times, QuantidadeDuendes;
    scanf("%i", &QuantidadeDuendes);

    struct cadastro duende[QuantidadeDuendes];
    times = QuantidadeDuendes/3;


    //Lendo as informações dos duendes:
    for (x=0; x<QuantidadeDuendes; x++) {
        scanf("%s", &duende[x].nome);
        scanf("%i", &duende[x].idade);
    }

    //Organizando em ordem decrescente:
    for ( x=0; x<QuantidadeDuendes; x++ ) {

        for ( x2=x; x2<QuantidadeDuendes; x2++ ) {
            if ( duende[x].idade < duende[x2].idade ) {
                //Trocando a idade:
                aux = duende[x].idade;
                duende[x].idade = duende[x2].idade;
                duende[x2].idade = aux;

                //Trocando o nome:
                strcpy(straux, duende[x].nome);
                strcpy(duende[x].nome, duende[x2].nome);
                strcpy(duende[x2].nome, straux);
            }
        }
    }

    //Ordenando os nomes caso tenham idades iguais:
    for ( x=0; x<QuantidadeDuendes; x++ ) {
        for ( x2=x; x2<QuantidadeDuendes; x2++ ) {

            if ( (duende[x].idade == duende[x2].idade) && ( strcmp(duende[x].nome, duende[x2].nome) != 0) )
            {
                if (strcmp(duende[x].nome, duende[x2].nome) > 0)
                {
                    strcpy(straux, duende[x].nome);
                    strcpy(duende[x].nome, duende[x2].nome);
                    strcpy(duende[x2].nome, straux);
                }
            }
        }
    }

    //Criando a lista de times:
    for (x=0; x<times; x++) {
        printf("Time %i\n", x+1);

        printf("%s %i\n", duende[x].nome, duende[x].idade);
        printf("%s %i\n", duende[x+times].nome, duende[x+times].idade);
        printf("%s %i\n", duende[x+(times*2)].nome, duende[x+(times*2)].idade);

        if (x<times-1) {printf("\n");}

    }


    //Teste - Imprimindo a ordem:
//    printf("\n");
//    for (x=0; x<QuantidadeDuendes; x++) {
//        printf("%s", duende[x].nome);
//        printf(" %i\n", duende[x].idade);
//    }

    return 0;
}


//9 = 3 (x, +3, +6)
//> Gyun 99
//Seies 77
//Pinhuobor 70
//> Kepeumo 67
//Norandir 66
//Necoi 62
//> Galvaindir 55
//Ciule 49
//Finron 27

//6 = 2 (x, +2, +4)
//00 > Josh 56
//01 Balfred 32
//02 > Joshua 34
//03 Harley 61
//04 > Aeggy 32
//05 Jim 25


//6
//Josh 56
//Alfred 32
//Joshua 34
//Harley 32
//Peggy 60
//Jim 25

//6
//Josh 56
//Harley 32
//Joshua 34
//Alfred 32
//Peggy 60
//Jim 25
