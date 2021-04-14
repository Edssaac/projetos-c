#include <stdio.h>

int main() {

    float I=0, J=1;
    int i, k;


    while (I <= 2.2) {

        for (i=0; i<3; i++) {
            printf("I=%.0f J=%.0f\n", I, J);
            J++;

        }

        if (I >= 2.0) {return 0;}

        I += 0.2;
        J += 0.2;
        J -= 3;

        for (i=0; i<4; i++) {
            for (k=0; k<3; k++) {
                printf("I=%.1f J=%.1f\n", I, J);
                J++;
            }

            I += 0.2;
            J += 0.2;
            J -= 3;
        }

    }


    return 0;
}
