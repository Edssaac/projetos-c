#include <stdio.h>
#include <stdlib.h>


int main() {

    int vetor[7];
    int primeiro;

    while ( scanf("%d", &primeiro) != EOF ) {

        vetor[0] = primeiro;
        for (int i=1; i<7; i++) {
            scanf("%d", &vetor[i]);
        }

        //antiga:
        if ( (vetor[0] >= 65 && vetor[0] <= 90) && (vetor[1] >= 65 && vetor[1] <= 90) && (vetor[2] >= 65 && vetor[2] <= 90) ) {
            if ( (vetor[3] >= 48 && vetor[3] <= 57) && (vetor[4] >= 48 && vetor[4] <= 57) && (vetor[5] >= 48 && vetor[5] <= 57) && (vetor[6] >= 48 && vetor[6] <= 57) ) {
                printf("ANTIGA\n");
                continue;
            }
        }

        //mercosul
        if ( (vetor[0] >= 65 && vetor[0] <= 90) && (vetor[1] >= 65 && vetor[1] <= 90) && (vetor[2] >= 65 && vetor[2] <= 90) ) {
            if ( (vetor[3] >= 48 && vetor[3] <= 90) && (vetor[4] >= 48 && vetor[4] <= 90) && (vetor[5] >= 48 && vetor[5] <= 90) && (vetor[6] >= 48 && vetor[6] <= 90) ) {
                printf("MERCOSUL\n");
                continue;
            }
        }

        printf("ERRO\n");
    }

    return 0;
}
