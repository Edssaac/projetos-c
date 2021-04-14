#include <stdio.h>

int main() {

    float S, i, k;
    S = 1;
    k = 2;


    for (i=3; i<=39; i+=2) {
        S += i/k;
        k*=2;

    }

    printf("%.2f\n", S);

    return 0;
}
