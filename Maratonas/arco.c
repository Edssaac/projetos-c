#include <stdio.h>
#include <math.h>


float distancia(float X, float Y, int x, int y) {

    float resultado;

    resultado = sqrt( pow(x - X, 2) + pow(y - Y, 2) );

    return resultado;

}


int main() {

    int N, X, Y, n, p, pontos;
    float flechas[100000];

    scanf("%i", &N);

    pontos = 0;
    n = 1;

    while (n <= N) {
        scanf("%i%i", &X, &Y);
        flechas[n] = distancia(X, Y, 0, 0);

        p = 1;

        while (p < n) {

            if (flechas[p] <= flechas[n]) {

                pontos += 1;

            }

            p += 1;

        }

        n += 1;

    }

    printf("%i\n", pontos);
    return 0;
}
