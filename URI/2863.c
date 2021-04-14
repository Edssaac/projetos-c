#include <stdio.h>

int main() {

    int testes;
    double marca, tempo;

    while ( scanf("%d", &testes) != EOF )
    {
        marca=15;
        while (testes>0)
        {
            scanf("%lf", &tempo);

            if ( tempo<marca ) marca=tempo;

            testes--;
        }

        printf("%.2lf\n", marca);
    }


    return 0;
}
