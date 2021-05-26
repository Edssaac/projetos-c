#include <stdio.h>
#include <stdlib.h>

int main(){

    char origem[3], destino[3];
    int dx, dy;


    scanf("%s %s", origem,destino);
    dx = abs(origem[0]-destino[0]);
    dy = abs(origem[1]-destino[1]);

    if ( (dx==2 && dy== 1) || (dx==1 && dy== 2) )
        printf("VALIDO\n");

    else
        printf("INVALIDO\n");


    return 0;
}

