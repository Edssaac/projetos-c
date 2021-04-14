#include <stdio.h>

int main() {
    double A, B, C, Media;

    scanf("%lf%lf%lf", &A, &B, &C);

    Media = ( (A*2)+(B*3)+(C*5) ) / 10;

    printf("MEDIA = %.1lf\n", Media);

    return 0;
}

