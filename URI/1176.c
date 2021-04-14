#include <stdio.h>

int main() {

    int T;
    scanf("%i", &T);
    int F[T];
    long long int i, f, a, b, c;

    for (i=0; i<T; i++) {

        scanf("%i", &F[i]);

    }


    for (i=0; i<T; i++) {

        a = 0;
        b = 1;

        if (F[i] == 0) {
            printf("Fib(0) = 0\n");
            continue;
        }
        else if (F[i] == 1) {
            printf("Fib(1) = 1\n");
            continue;
        }

        for (f=0; f<F[i]-1; f++) {

            c = a+b;
            a = b;
            b = c;

        }

        printf("Fib(%i) = %lld\n", F[i], c);

    }

    return 0;
}
