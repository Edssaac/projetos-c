#include <stdio.h>

int main(void) {

    int t, n, i, j, caso=0;

    scanf("%d", &t);

    for (i=0; i<t; i++) {
        scanf("%d", &n);
        int muros[n], altos=0, baixos=0;
        caso++;

        for (j=0; j<n; j++) {
            scanf("%d", &muros[j]);
        }

        for (j=0; j<n-1; j++) {
            if (muros[j] < muros[j+1]) {
                altos++;
            } else if (muros[j] > muros[j+1]) {
                baixos++;
            }
        }

        printf("Case %d: %d %d\n", caso, altos, baixos);
    }

    return 0;
}
