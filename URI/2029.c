#include <stdio.h>
#include <math.h>


int main() {

    double volume, diamentro, altura, area;
    double n = 3.14;

    while ( scanf("%lf", &volume) != EOF )
    {
        scanf("%lf", &diamentro);

        altura = volume / (n * pow((diamentro/2.0), 2)) ;
        area = n * pow((diamentro/2.0), 2) ;

        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);

    }


    return 0;
}
