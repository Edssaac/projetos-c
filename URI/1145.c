#include <stdio.h>

int main() {

    int X, Y;
    int i, k;


    scanf("%i %i", &X, &Y);

    for (i=0; i<Y; ) {

        for (k=0; k<X ; k++) {

            i++;

            if (k==0) {
                printf("%ia", i);
            }
            else {
                printf(" %i", i);
            }

        }

        printf("\n");

    }

    return 0;
}
