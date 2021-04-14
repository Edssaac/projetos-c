#include <stdio.h>

struct dados {

    long PA, PB;
    float G1, G2;

};

int main() {

    int Casos, anos, i, habitantesA, habitantesB;
    scanf("%i", &Casos);
    struct dados teste[Casos];


    //Leitura de dados:
    for (i=0; i<Casos; i++) {

        scanf("%d %d %f %f", &teste[i].PA,
                              &teste[i].PB,
                              &teste[i].G1,
                              &teste[i].G2);

    }


    //Processando os dados e realizando as devidas saidas:
    for (i=0; i<Casos; i++) {
        habitantesA = teste[i].PA;
        habitantesB = teste[i].PB;
        anos = 0;

        do
        {   anos++;

            habitantesA += (int) (teste[i].G1*habitantesA)/100;
            habitantesB += (int) (teste[i].G2*habitantesB)/100;


            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }

        } while ( habitantesA <= habitantesB );


        if (anos <= 100) {printf("%i anos.\n", anos);}
    }


        //Testando a captura de dados:
//    for (i=0; i<Casos; i++) {
//
//        printf("%d %d %.1lf %.1lf\n", teste[i].PA,
//                              teste[i].PB,
//                              teste[i].G1,
//                              teste[i].G2);
//
//    }

    return 0;
}
