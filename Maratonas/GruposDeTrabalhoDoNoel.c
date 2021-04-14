#include <stdio.h>
#include <string.h>

struct dados {

    char nome[25];
    char grupo[15];
    int horas;

};

struct horas {

    int bonecos, arquitetos, musicos, desenhistas;

};

int main() {

    int Quantidade_Elfos, Brinquedos, registro;
    scanf("%i", &Quantidade_Elfos);

    struct dados elfo[Quantidade_Elfos];
    struct horas hora;

    Brinquedos = hora.bonecos = hora.arquitetos = hora.musicos = hora.desenhistas = 0;


    for (registro=0; registro<Quantidade_Elfos; registro++) {

        scanf("%s", &elfo[registro].nome);

        scanf("%s", &elfo[registro].grupo);

        scanf("%i", &elfo[registro].horas);

   }


    for (registro=0; registro<Quantidade_Elfos; registro++) {

        if ( strcmp(elfo[registro].grupo, "bonecos") == 0 ) {
            hora.bonecos += elfo[registro].horas;
        }
        else if ( strcmp(elfo[registro].grupo, "arquitetos") == 0 ) {
            hora.arquitetos += elfo[registro].horas;
        }
        else if ( strcmp(elfo[registro].grupo, "musicos") == 0 ) {
            hora.musicos += elfo[registro].horas;
        }
        else if ( strcmp(elfo[registro].grupo, "desenhistas") == 0 ) {
            hora.desenhistas += elfo[registro].horas;
        }

   }


    Brinquedos += (hora.bonecos/8) + (hora.arquitetos/4) + (hora.musicos/6) + (hora.desenhistas/12);

    printf("%i\n", Brinquedos);

    return 0;
}
