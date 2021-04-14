#include <stdio.h>

struct Casos {

    int R1, R2;

};

int main() {

    int T, caso;
    scanf("%i", &T);

    struct Casos teste[T];


    for ( caso=0; caso<T; caso++) {
        scanf("%i %i", &teste[caso].R1, &teste[caso].R2);
    }

    for ( caso=0; caso<T; caso++ ) {

        printf("%i\n", (teste[caso].R1 + teste[caso].R2) );

    }


    return 0;
}
