#include <stdio.h>

int main() {

    int a, b, soma, i;


    while (1)
    {
        soma = 0;

        scanf("%i %i", &a, &b);

        if ( a <= 0 || b <= 0 ) {
            return 0;
        }


        if (a < b) {

            for (i=a; i<=b; i++) {
                printf("%i ", i);
                soma+=i;
            }

        }
        else {

            for (i=b; i<=a; i++) {
                printf("%i ", i);
                soma+=i;
            }

        }

        printf("Sum=%i\n", soma);
    }


    return 0;
}
