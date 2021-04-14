#include <stdio.h>

int main() {

    int X, i;


    scanf("%i", &X);

    for (i=1; i<=X; i++) {
        if (i%2==0) {
            printf("%i^2 = %d\n", i, (i*i) );
        }
    }

    return 0;
}
