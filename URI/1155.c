#include <stdio.h>


int main() {

    float S, i;
    S = 1;


    for (i=2; i<=100; i++) {
        S += 1/i;
    }

    printf("%.2f\n", S);

    return 0;
}
