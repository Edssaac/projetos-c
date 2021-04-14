#include <stdio.h>

int main() {

    int deve, paga, troco;
    int trocado[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
    int x, i;

    while (1)
    {
        scanf("%d", &deve);
        scanf("%d", &paga);

        if (deve==0&&paga==0)
            break;

        troco = paga-deve;
        x=0;

        for (i=0; i<15; i++)
            if ( trocado[i]==troco )
                x = 1;

        (x==1) ? printf("possible\n") : printf("impossible\n") ;
    }


    return 0;
}
