#include <stdio.h>

int main() {

    int Casos, Numero, i, k, Soma;

    scanf("%i", &Casos);

    for (i=0; i<Casos; i++) {

        scanf("%i", &Numero);
        Soma = 0;

        for (k=1; k<Numero; k++) {

            if (Numero%k == 0) {
                Soma+=k;
            }
        }

        (Soma == Numero) ? printf("%i eh perfeito\n", Numero) : printf("%i nao eh perfeito\n", Numero) ;
    }


    return 0;
}
