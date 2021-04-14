#include <stdio.h>

struct Dados {

    int X, Y;
    int Soma;

} ;

int main() {

    int casos, i, k, aux;
    scanf("%i", &casos);
    struct Dados dados[casos];


    for (i=0; i<casos; i++) {

        scanf("%i %i", &dados[i].X, &dados[i].Y);

        if (dados[i].X > dados[i].Y) {
            aux = dados[i].X;
            dados[i].X = dados[i].Y;
            dados[i].Y = aux;
        }

        dados[i].Soma = 0;
        for (k = (dados[i].X+1); k<dados[i].Y; k++ ) {
            if (k%2 != 0) {
                dados[i].Soma += k;
            }
        }

    }


    for (i=0; i<casos; i++) {
        printf("%i\n", dados[i].Soma);
    }


    return 0;
}
