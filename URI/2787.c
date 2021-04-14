#include <stdio.h>

int main() {

    int linha, coluna;


    scanf("%d %d", &linha, &coluna);

    //0 preta
    //1 branca

    if ( linha%2!=0 && coluna%2!=0 ) printf("1\n");
    else if ( linha%2!=0 && coluna%2==0 ) printf("0\n");
    else if ( linha%2==0 && coluna%2==0 ) printf("1\n");
    else if ( linha%2==0 && coluna%2!=0 ) printf("0\n");


    return 0;
}
