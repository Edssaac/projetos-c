#include <stdio.h>

int main() {

    int N, i;


    scanf("%i", &N);

    for (i=1; i<=10; i++) {
        printf("%i x %i = %i\n", i, N, i*N);
    }


    return 0;
}

