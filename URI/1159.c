#include <stdio.h>

int main() {

    int X, soma, i;

    do
    {
        scanf("%i", &X);
        soma = 0;

        if (X != 0)
        {
            if (X%2 == 0) {
                for (i=0; i<5; i++) {
                    soma+= X;
                    X += 2;
                }
            }
            else {
                X++;
                for (i=0; i<5; i++) {
                    soma+= X;
                    X += 2;
                }
            }

            printf("%i\n", soma);
        }


    } while (X != 0);


    return 0;
}
