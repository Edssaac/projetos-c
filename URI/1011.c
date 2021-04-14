#include <stdio.h>

int main() {
    double pi, R, volume;

    scanf("%lf", &R);
    pi = 3.14159;
    R = (R * R * R);
    volume = (4.0/3.0) * pi * R;

    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
