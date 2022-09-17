#include <stdio.h>

int main(void) {

    int h, z, l;

    scanf("%d %d %d", &h, &z, &l);

    if ((z > h && h > l) || (z < h && h < l)) {
        printf("huguinho\n");
    }
    else if ((h > z && z > l) || (h < z && z < l)) {
        printf("zezinho\n");
    }
    else {
        printf("luisinho\n");
    }

    return 0;
}
