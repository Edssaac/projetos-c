#include <stdio.h>
#include <math.h>

double Fibonacci(double n);

int main() {

    int n;
    double F;


    scanf("%d", &n);
    F = Fibonacci(n);
    printf("%.1lf\n", F);


    return 0;
}

double Fibonacci(double n) {

    double resp;

    resp = ( ( pow( ((1+sqrt(5))/2.0), n ) ) - ( pow( ((1-sqrt(5))/2.0), n )  ) ) / sqrt(5) ;

    return resp;
}
