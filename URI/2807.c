#include <stdio.h>

int main() {

    int quantidade, i;
    scanf("%d", &quantidade);
    int lista[quantidade];


    lista[0]=lista[1]=1;

    for ( i=2; i<quantidade; i++ )
        lista[i] = lista[i-1]+lista[i-2];

    for ( i=quantidade-1; i>0; i-- )
        printf("%d ", lista[i]);

    printf("1\n");


    return 0;
}
