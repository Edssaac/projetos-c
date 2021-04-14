#include <stdio.h>

int main() {

    int H, P;
    double M;


    scanf("%d %d", &H, &P);

    M = (double) H/P;

    printf("%.2lf\n", M);

    return 0;
}
