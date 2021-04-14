#include <stdio.h>

int main() {

    int N, i;
    int *valores; //Ponteiro;


    scanf("%i", &N); //Lendo o tamanho do array;
    valores = (int *)( malloc( N * sizeof(int) ) ); //Criando array com o ponteiro e o tamanho escolhido;


    for (i=0; i<N; i++) { //Lendo;
        scanf("%d", &valores[i]);
    }


    for (i=0; i<N; i++) { //Gerando as saidas;
        if ( valores[i] == 0) {printf("NULL\n"); continue;}

        if ( valores[i] % 2 == 0 ) {printf("EVEN");}
        else {printf("ODD");}

        if ( valores[i] > 0 ) {printf(" POSITIVE\n");}
        else {printf(" NEGATIVE\n");}
    }

    return 0;
}
