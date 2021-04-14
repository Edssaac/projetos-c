#include <stdio.h>

int main() {

    //4 notas;
    float notas[3], media, nota_exame, media_exame;
    int i;

    for (i=0; i<4; i++) {
        scanf("%f", &notas[i]);
    }

    media = ( ( (notas[0] * 2) + (notas[1] * 3) + (notas[2] * 4) + (notas[3]) * 1 ) / 10 );
    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");

        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);

        media_exame = ((media + nota_exame) / 2);


        if (media_exame >= 5.0) {
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media_exame);

    }


    return 0;
}
