#include <stdio.h>

int main() {

    int N, i;


    scanf("%i", &N);
    for (i=1; i<=N; i++) {

        if (N%i == 0) {
            printf("%i\n", i);
        }
    }

    return 0;
}
