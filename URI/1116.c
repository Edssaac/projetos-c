#include <stdio.h>

int main() {

    int quantidade, x, y, i;
    float div;

    scanf("%i", &quantidade);

    for (i=0; i<quantidade; i++) {

        scanf("%d %d", &x, &y);

        if (y == 0) {
            printf("divisao impossivel\n");
        }
        else {
            div = (double) x/y; //Casting
            printf("%.1f\n", div);
        }

    }


    return 0;
}
