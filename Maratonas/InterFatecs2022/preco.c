#include <stdio.h>
#include <stdlib.h>


int main() {

    float T, P, V;

    scanf("%f", &T);
    scanf("%f", &P);
    scanf("%f", &V);

    printf("%.2f\n", ( (P-T) * V ) );

    return 0;
}

