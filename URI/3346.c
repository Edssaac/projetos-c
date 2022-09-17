#include <stdio.h>

int main(void) {

    double f1, f2, f;

    scanf("%lf", &f1);
    scanf("%lf", &f2);

    f = ( ( (1.0 + f1/100.00) * (1.0 + f2/100.00) ) - 1.0 ) * 100.0;

    printf("%.6lf\n", f);

    return 0;
}
