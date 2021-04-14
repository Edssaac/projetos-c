#include <stdio.h>

int main() {

    int N, i;


    scanf("%i", &N);

    for (i=0; i<N; i++) {

        (i==0) ? printf("Ho") : printf(" Ho");

    }

    printf("!\n");

    return 0;
}
