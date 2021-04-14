#include <stdio.h>

int main() {

    int T, R[5], i, acertos;
    acertos = 0;

    scanf("%d", &T);

    for ( i=0; i<5; i++ )
    {
       scanf("%d", &R[i]);

       if (R[i] == T) {acertos++;}
    }

    printf("%d\n", acertos);

    return 0;
}
