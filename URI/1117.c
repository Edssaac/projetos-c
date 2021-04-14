#include <stdio.h>

int main() {

    float nota, nota_aceita;
    float media;
    int x;

    nota_aceita = 0;
    x = 0;

    while (1)
    {
        if (x==2) {break;}
        scanf("%f", &nota);


        if (nota > 10 || nota < 0) {
            printf("nota invalida\n");
            continue;
        }

        nota_aceita += nota;
        x++;
    }

    media = nota_aceita / 2.00;
    printf("media = %.2f\n", media);

    return 0;
}
