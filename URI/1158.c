#include <stdio.h>

struct testes {

    int X, Y;
};

int main() {

    int Casos, caso, i, soma;
    scanf("%i", &Casos);
    struct testes teste[Casos];


    for (caso=0; caso<Casos; caso++) {
        scanf("%i %i", &teste[caso].X, &teste[caso].Y);
    }

    for (caso=0; caso<Casos; caso++) {
        soma = 0;

        if (teste[caso].X % 2 != 0) {
            for (i=0; i<teste[caso].Y; i++) {
                soma += teste[caso].X;
                teste[caso].X += 2;
            }
        }

        else {
            teste[caso].X++;
            for (i=0; i<teste[caso].Y; i++) {
                soma += teste[caso].X;
                teste[caso].X += 2;
            }
        }

        printf("%i\n", soma);
    }

    return 0;
}
