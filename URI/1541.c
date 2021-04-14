#include <stdio.h>
#include <math.h>

int main() {

    int A, B, C, Area, Tamanho;

    do
    {
        scanf("%i", &A);
        if (A != 0)
        {
            scanf("%i %i", &B, &C);

            Area = A*B;
            Tamanho = (int) ((Area * 100) / C);
            Tamanho = (int) ( pow(Tamanho, 0.5) );

            printf("%i\n", Tamanho);
        }

    } while (A != 0);


    return 0;
}
