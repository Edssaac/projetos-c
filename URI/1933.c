#include <stdio.h>

int main() {

    int a, b;


    scanf("%i %i", &a, &b);

    if (a==b) {
        printf("%i\n", a);
    }
    else
    {
        (a>b) ? printf("%i\n", a) : printf("%i\n", b) ;
    }

    return 0;
}
