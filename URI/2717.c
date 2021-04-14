#include <stdio.h>

int main() {

    int N, A, B;


    scanf("%d", &N);
    scanf("%d %d", &A, &B);

    printf( N>=(A+B) ? "Farei hoje!" : "Deixa para amanha!" );
    printf("\n");


    return 0;
}
