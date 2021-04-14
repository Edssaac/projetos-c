#include <stdio.h>

int main() {

    int Max, i;


    do
    {
        scanf("%i", &Max);

        for (i=1; i<=Max; i++) {

            if (i == 1) {
                printf("%i", i);
            }
            else {
                printf("% i", i);
            }
        }

        if (Max != 0) {printf("\n");}

    } while (Max != 0);


    return 0;
}
