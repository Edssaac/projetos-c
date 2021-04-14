#include <stdio.h>

int main() {

    int L, C, t1, t2;


    scanf("%d %d", &L, &C);

    t1 = (L * C) + (L - 1) * (C - 1);
    t2 = (2 * (L - 1)) + (2 * (C - 1));

    printf("%d\n%d\n", t1, t2);


    return 0;
}
