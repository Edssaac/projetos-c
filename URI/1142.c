#include <stdio.h>

int main() {

    int X, i;
    int a, b, c;

    a=1;
    b=2;
    c=3;

    scanf("%i", &X);

    for (i=0; i<X; i++) {

        printf("%d %d %d PUM\n", a, b, c);

        a+=4;
        b+=4;
        c+=4;

    }

    return 0;
}
