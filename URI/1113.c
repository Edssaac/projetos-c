#include <stdio.h>

int main() {

    int a, b;


    while (1) {

        scanf("%i %i", &a, &b);

        if (a == b) {
            break;
        }

        if (a < b) {
            printf("Crescente\n");
        }
        else {
            printf("Decrescente\n");
        }
    }

    return 0;
}
