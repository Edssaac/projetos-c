#include <stdio.h>

int main() {
    int nota, moeda;
    int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;
    n100=n50=n20=n10=n5=n2=m1=m50=m25=m10=m05=m01=0;

    scanf("%d.%d", &nota, &moeda);
    while (nota > 0 || moeda > 0) {

        if (nota >= 100) {
            nota -= 100;
            n100 += 1;
        } else if (nota >= 50) {
            nota -= 50;
            n50 += 1;
        } else if (nota >= 20) {
            nota -= 20;
            n20 += 1;
        } else if (nota >= 10) {
            nota -= 10;
            n10 += 1;
        } else if (nota >= 5) {
            nota -= 5;
            n5 += 1;
        } else if (nota >= 2) {
            nota -= 2;
            n2 += 1;

        } else if (nota >= 1) {
            nota -= 1;
            m1 += 1;
        }

        if (moeda >= 50) {
            moeda -= 50;
            m50 += 1;
        } else if (moeda >= 25) {
            moeda -= 25;
            m25 += 1;
        } else if (moeda >= 10) {
            moeda -= 10;
            m10 += 1;
        } else if (moeda >= 5) {
            moeda -= 5;
            m05 += 1;
        } else if (moeda >= 1) {
            moeda -= 1;
            m01 += 1;
        }
    }

    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", n100);
    printf("%i nota(s) de R$ 50.00\n", n50);
    printf("%i nota(s) de R$ 20.00\n", n20);
    printf("%i nota(s) de R$ 10.00\n", n10);
    printf("%i nota(s) de R$ 5.00\n", n5);
    printf("%i nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", m1);
    printf("%i moeda(s) de R$ 0.50\n", m50);
    printf("%i moeda(s) de R$ 0.25\n", m25);
    printf("%i moeda(s) de R$ 0.10\n", m10);
    printf("%i moeda(s) de R$ 0.05\n", m05);
    printf("%i moeda(s) de R$ 0.01\n", m01);

    return 0;
}
