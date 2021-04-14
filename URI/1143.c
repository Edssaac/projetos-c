#include <stdio.h>
#include <math.h>

int main() {

    int linhas, i, v1, v2;


    scanf("%d", &linhas);

    for (i=1; i<=linhas; i++) {

        v1 = pow(i, 2);
        v2 = pow(i, 3);
        printf("%d %d %d\n", i, v1, v2 );
    }

    return 0;
}
