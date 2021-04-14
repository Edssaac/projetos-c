#include <stdio.h>

int main() {

    int exercitos[6], i, x, y;


    x=y=0;
    for ( i=0; i<6; i++ )
    {
        scanf("%d", &exercitos[i]);

        if ( i<3 ) x+=exercitos[i];
        else if ( i<5 ) y+=exercitos[i];
    }

    if ( x>y || x+exercitos[5]>=y ) printf("Middle-earth is safe.\n");
    else printf("Sauron has returned.\n");


    return 0;
}
