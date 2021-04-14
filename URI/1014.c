#include <stdio.h>

int main() {
    int km;
    float gas;

    scanf("%i %f", &km, &gas);
    printf("%.3f km/l\n", (km/gas) );

    return 0;
}
