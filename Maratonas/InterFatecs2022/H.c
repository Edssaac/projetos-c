#include <stdio.h>
#include <stdlib.h>

typedef struct quadro{
    int i, ii, iii, iv;
} q;

int main() {

    int i, x, y, quantidade;
    q total;

    total.i = 0;
    total.ii = 0;
    total.iii = 0;
    total.iv = 0;

    scanf("%d", &quantidade);

    for (i=0; i<quantidade; i++) {

        scanf("%d %d", &x, &y);

        if(x > 0 && y > 0)
            total.i++;
        else if(x>0 && y<0)
            total.ii++;
        else if(x < 0 && y<0)
            total.iii++;
        else if(x < 0 && y > 0)
            total.iv++;
    }

    printf("I = %d\nII = %d\nIII = %d\nIV = %d\n", total.i, total.ii, total.iii, total.iv);


    return 0;
}

