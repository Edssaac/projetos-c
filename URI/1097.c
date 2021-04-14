#include <stdio.h>

int main() {

    int I=1, J=7;
    int i;


    while (I<=9) {

        for (i=0; i<3; i++) {
            printf("I=%i J=%i\n", I, J);
            J--;
        }

        I += 2;
        J += 5;
    }


    return 0;
}

