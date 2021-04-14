#include <stdio.h>

int main() {

    int Lesmas, MV, vel, i;


    while ( scanf("%i", &Lesmas) != EOF )
    {
        MV = 0;
        for (i=0; i<Lesmas; i++) {
            scanf("%i", &vel);

            if (MV < vel) {
                MV = vel;
            }
        }

        if (MV <= 9) {
            printf("1\n");
        }
        else if (MV >= 10 && MV < 20) {
            printf("2\n");
        }
        else if (MV >= 20) {
            printf("3\n");
        }

    }

    return 0;
}
