#include <stdio.h>

int main(void) {

    int n, a, b, t;

    scanf("%d", &n);
    t = n*n;

    if (n % 2 == 0) {
        a = t/2;
        b = t/2;
    } else {
        a = (t/2)+1;
        b = t/2;
    }

    printf("%d casas brancas e %d casas pretas\n", a, b);

    return 0;
}
