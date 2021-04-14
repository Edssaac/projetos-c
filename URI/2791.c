#include <stdio.h>

int main() {

    int feijoes[4];
    int i, x;


    for ( i=0; i<4; i++ )
    {
        scanf("%d", &feijoes[i]);
        if ( feijoes[i] == 1 ) x = i+1;
    }

    printf("%d\n", x);


    return 0;
}
