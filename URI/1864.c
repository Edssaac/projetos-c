#include <stdio.h>

int main() {

    int N, i;
    char texto[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";


    scanf("%i", &N);

    for (i=0; i<N; i++) {
        printf("%c", texto[i]);
    }
    printf("\n");

    return 0;
}
