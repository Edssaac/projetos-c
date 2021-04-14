#include <stdio.h>

int main() {

    int I=1, J=60;

    printf("I=%i J=%i\n", I, J);

    do {

        I += 3;
        J -= 5;

        printf("I=%i J=%i\n", I, J);
    } while (J != 0);


    return 0;
}
