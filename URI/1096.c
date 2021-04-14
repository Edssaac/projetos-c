#include <stdio.h>

int main() {

    int I=1, J;

    int i, k;


    for (k=0; k<5; k++) {

        J=7;

        for (i=0; i<3; i++) {
            printf("I=%i J=%i\n", I, J);
            J--;
        }

        I += 2;
    }

    return 0;
}
