#include <stdio.h>

int main() {
    int X, x, n100, n50, n20, n10, n5, n2, n1;
    n100=n50=n20=n10=n5=n2=n1=0;

    scanf("%i", &X);
    x = X;
    while (X > 0) {
        if (X >= 100) {
            X -= 100;
            n100 += 1;
        } else if (X >= 50) {
            X -= 50;
            n50 += 1;
        } else if (X >= 20) {
            X -= 20;
            n20 += 1;
        } else if (X >= 10) {
            X -= 10;
            n10 += 1;
        } else if (X >= 5) {
            X -= 5;
            n5 += 1;
        } else if (X >= 2) {
            X -= 2;
            n2 += 1;
        } else if (X >= 1) {
            X -= 1;
            n1 += 1;
        }
    }

    printf("%i\n", x);
    printf("%i nota(s) de R$ 100,00\n", n100);
    printf("%i nota(s) de R$ 50,00\n", n50);
    printf("%i nota(s) de R$ 20,00\n", n20);
    printf("%i nota(s) de R$ 10,00\n", n10);
    printf("%i nota(s) de R$ 5,00\n", n5);
    printf("%i nota(s) de R$ 2,00\n", n2);
    printf("%i nota(s) de R$ 1,00\n", n1);

    return 0;
}
