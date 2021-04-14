#include <stdio.h>

int main() {

    int hh, mm;


    while ( scanf("%d %d", &hh, &mm) != EOF )
    {
        hh/=30;
        mm/=6;

        printf("%02d:%02d\n", hh, mm);
    }


    return 0;
}
