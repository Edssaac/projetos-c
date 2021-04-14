#include <stdio.h>

int main() {

    int X[10];
    int i;


    for (i=0; i<10; i++) {

        scanf("%i", &X[i]);

    }

    for (i=0; i<10; i++) {

        if (X[i] <= 0) {
            X[i] = 1;
        }

    }

    for (i=0; i<10; i++) {

        printf("X[%i] = %i\n", i, X[i]);

    }


    return 0;
}
