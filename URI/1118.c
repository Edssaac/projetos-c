#include <stdio.h>

int main() {

    float nota, media;
    int x, resp;


    while (1)
    {
        x = media = 0;

        do {
            scanf("%f", &nota);

            if (nota > 10 || nota < 0) {
                printf("nota invalida\n");
                continue;
            }

            media += nota;
            x++;

        } while (x < 2);

        media = media/2.0;
        printf("media = %.2f\n", media);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%i", &resp);
        } while (resp!=1 && resp!=2);

        if (resp == 1) {continue;}
        else {break;}

    }


    return 0;
}
