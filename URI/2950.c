#include <stdio.h>

int main() {

    int n, x, y;
    double dm;


    scanf("%d %d %d", &n, &x, &y);
    dm = ( n / (float)(x+y) );

    printf("%.2lf\n", dm );


    return 0;
}
