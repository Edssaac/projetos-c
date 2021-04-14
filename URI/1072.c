#include <stdio.h>

int main() {

    int N, i, in, out;
    int *valores;
    in = out = 0;


    scanf("%d", &N);

    valores = (int *)(malloc( N * sizeof(int) ));

    for ( i=0; i<N; i++ ) {
        scanf("%d", &valores[i]);

        if (valores[i] >= 10 && valores[i] <= 20) {
            in++;
        } else {
            out++;
        }
    }


    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}


/*
int main() {

    int N, i, in, out;
    int valores[N];
    in = out = 0;


    scanf("%i", &N);

    for ( i=0; i<N; i++ ) {
        scanf("%i", &valores[i]);

        if (valores[i] >= 10 && valores[i] <= 20) {
            in++;
        } else {
            out++;
        }
    }


    printf("%i in\n", in);
    printf("%i out\n", out);

    return 0;
}
*/
