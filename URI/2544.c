#include <stdio.h>

int main() {

    int kage_bunshin, jutsus;

    while ( scanf("%d", &kage_bunshin) != EOF )
    {
        jutsus=0;
        while (kage_bunshin>1) //Dividir até não poder mais;
        {
            kage_bunshin = kage_bunshin/2;
            jutsus++;
        }


        printf("%d\n", jutsus);
    }


    return 0;
}
