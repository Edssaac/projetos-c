#include <stdio.h>

int main() {

    int bola, bolas, i, rena;


    bolas=0;
    for ( i=0; i<9; i++ )
    {
        scanf("%d", &bola);
        bolas+=bola;
    }

    while (bolas>0) {
        for ( i=0; i<9; i++ )
        {
            bolas--;
            if (bolas==0)
            {
                rena=i;
                break;
            }
        }
    }

    switch (rena)
    {
        case 0:
            printf("Dasher\n");
            break;
        case 1:
            printf("Dancer\n");
            break;
        case 2:
            printf("Prancer\n");
            break;
        case 3:
            printf("Vixen\n");
            break;
        case 4:
            printf("Comet\n");
            break;
        case 5:
            printf("Cupid\n");
            break;
        case 6:
            printf("Donner\n");
            break;
        case 7:
            printf("Blitzen\n");
            break;
        case 8:
            printf("Rudolph\n");
            break;
    }


    return 0;
}
