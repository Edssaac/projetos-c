#include <stdio.h>

int main() {

    int linhas;
    int i, a, b, c;

    a = b = c = 1;


    scanf("%d", &linhas);

    for (i=0; i<(linhas); i++) {

        printf("%i %i %i\n", a, b, c);

        b+=1;
        c+=1;

        printf("%i %i %i\n", a, b, c);

        a+=1;
        b = a*a;
        c = a*b;

    }


    return 0;
}
