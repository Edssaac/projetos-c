/*
Primeira Linha:
N = Numero de figurinhas/espaços
C = numero de figurinhas carimbadas
M = numero de figurinhas ja compradas

Segunda Linha:
C numeros = figurinhas carimbadas

Terceira Linha:
M numeros int = figs
*/

#include <stdio.h>

int main() {

    int N, C, M, cont=0;

    scanf("%i%i%i", &N, &C, &M);
    int figurinhas[M], carimbadas[C];

    for (int i=0; i < C; i++) {
        scanf("%i", &carimbadas[i]);
    }

    for (int k=0; k < M; k++) {
        scanf("%i", &figurinhas[k]);
    }

    for (int i=0; i < M; i++) {
        for (int j=0; j < C; j++) {
            if (figurinhas[i] == carimbadas[j]) {
                cont++;
            }
        }
    }

    printf("%i\n", C-cont);
    return 0;
}
