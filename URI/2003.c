#include <stdio.h>

int main() {

    int hh, mm, atraso;


    while ( scanf("%d:%d", &hh, &mm) != EOF )
    {
        hh++;

        if ( hh<=7 )
        {
            printf("Atraso maximo: 0\n");
        }
        else
        {
            atraso = ((hh-8)*60) + mm;
            printf("Atraso maximo: %d\n", atraso);
        }
    }

    return 0;
}
