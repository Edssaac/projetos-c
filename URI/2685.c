#include <stdio.h>

int main() {

    int pos;


    while ( scanf("%d", &pos) != EOF )
    {
        if ( pos >=90 && pos < 180 ) printf("Boa Tarde!!\n");
        else if ( pos >=180 && pos < 270 ) printf("Boa Noite!!\n");
        else if ( pos >=270 && pos < 360 ) printf("De Madrugada!!\n");
        else printf("Bom Dia!!\n");
    }


    return 0;
}
