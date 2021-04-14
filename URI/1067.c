#include <stdio.h>

int main() {

    int X, i;

    scanf("%i", &X);


    for (i=1; i<=X; i++) {
        if (i%2 == 1) {
            printf("%i\n", i);
        }
    }


    return 0;
}
