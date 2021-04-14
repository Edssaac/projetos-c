#include <stdio.h>

int main() {

    int dec=0, oct=+0, i;
    char hex[7] = "ABCDEF";

    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");

    for ( i=0; i<16; i++ )
    {
        if (oct==8) oct+=2;

        if (oct>9&&oct<12)
        {
            printf("|      %d    |   %d    |       %d       |\n", dec, oct, dec);
        }
        else if (dec<=9)
        {
            printf("|      %d    |    %d    |       %d       |\n", dec, oct, dec);
        }
        else
        {
            printf("|     %d    |   %d    |       %c       |\n", dec, oct, hex[i-10]);
        }


        dec++;
        oct++;
    }

    printf("---------------------------------------\n");


    return 0;
}
