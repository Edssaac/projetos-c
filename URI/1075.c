#include <stdio.h>

int main() {

    int X, i;

    scanf("%i", &X);


    for (i=1; i<=10000; i++) {
        if (i%X == 2) {
            printf("%i\n", i);
        }
    }


    return 0;
}
