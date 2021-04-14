#include <stdio.h>

struct Placar {

    int inter;
    int gremio;
    int empate;
};


int main() {

    int grenais, grenal;
    int inter, gremio;
    struct Placar placar;

    placar.empate = placar.inter = placar.gremio = grenais = 0;


    do
    {
        scanf("%i %i", &inter, &gremio);

        grenais++;

        if (inter == gremio) {
            placar.empate++;
        }
        else if (inter > gremio) {
            placar.inter++;
        }
        else if (inter < gremio) {
            placar.gremio++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &grenal);

    } while (grenal == 1);


    printf("%i grenais\n", grenais);
    printf("Inter:%i\n", placar.inter);
    printf("Gremio:%i\n", placar.gremio);
    printf("Empates:%i\n", placar.empate);

    if (placar.inter == placar.gremio) {
        printf("Nao houve vencedor\n");
    }
    else if (placar.inter > placar.gremio) {
        printf("Inter venceu mais\n");
    }
    else if (placar.inter < placar.gremio) {
        printf("Gremio venceu mais\n");
    }

    return 0;
}
