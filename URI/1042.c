#include <stdio.h>
/*
int main() {

    int a, b, c, total, menor, menor2;

    scanf("%i%i%i", &a, &b, &c);
    total = a+b+c;

    if (a <= b && a <= c)
    {
        printf("%i\n", a);
        menor = a;

        menor2 = b <= c ? b : c;
        printf("%i\n", menor2);
    }
    else
    {
        if (b <= c)
        {
            printf("%i\n", b);
            menor = b;
            menor2 = c;
        }
        else
        {
            printf("%i\n", c);
            menor = c;
            menor2 = (b-a) < (a-b) ? b : a;
        }

        printf("%i\n", menor2);
    }

    printf("%i\n", total - (menor+menor2));

    //Imprimindo na ordem de entrada:
    printf("\n%i\n%i\n%i", a, b, c);

    return 0;
}
*/


int alta(int a, int b, int c) {

    if (a > b) {
        if (a > c) {
            return a;
        } else {
            return c;
        }
    }
    else if (b > c) {
        return b;
    } else {
        return c;
    }

}

int baixa(int a, int b, int c) {

    if (a < b) {
        if (a < c) {
            return a;
        } else {
            return c;
        }
    }
    else if (b < c) {
        return b;
    } else {
        return c;
    }

}

int main() {

    int a, b, c;
    int maior3, maior2, maior;

    scanf("%i%i%i", &a, &b, &c);

    maior2 = (a+b+c) - ( alta(a, b, c) + baixa(a, b, c) );
    maior = alta(a, b, c);
    maior3 = (a+b+c) - (maior+maior2);


    printf("%i\n", maior3);
    printf("%i\n", maior2);
    printf("%i\n", maior);

    printf("\n%i\n%i\n%i\n", a, b, c);

    return 0;
}
