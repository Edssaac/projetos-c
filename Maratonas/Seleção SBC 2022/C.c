#include <stdio.h>

typedef struct bota{
    int tam;
    char pe;
}Bota;

int main(){
    int casos, i=0, j=0, pares=0;

    scanf("%d", &casos);
    Bota botas[casos];

    for(i = 0; i < casos; i++){
        scanf("%d %c", &botas[i].tam, &botas[i].pe);
    }

    for(i = 0; i < casos; i++){
        Bota botaAtual;

        botaAtual.tam = botas[i].tam;
        botaAtual.pe = botas[i].pe;

        for(j = i+1; j < casos; j++){
            if(botaAtual.tam == botas[j].tam && botaAtual.pe != botas[j].pe){
                pares++;
                botas[j].tam = 0;
                botas[j].pe = 'X';

                break;
            }
        }
    }

    printf("%d\n", pares);
}
