#include <stdio.h>

struct dados {

    int num;
};

int main() {

    int C, i;
    scanf("%i", &C);
    struct dados caso[C];


    for (i=0; i<C; i++) {
        scanf("%i", &caso[i].num);
    }

    for (i=0; i<C; i++) {
        ( caso[i].num%2 == 0 ) ? printf("0\n") : printf("1\n");
    }


    return 0;
}
