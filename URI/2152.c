#include <stdio.h>

struct dados {

    int hora, minuto, ocorrencia;
};

int main() {

    int casos, caso;
    scanf("%d", &casos);
    struct dados atividade[casos];


    for ( caso=0; caso<casos; caso++ )
    {
        scanf("%d %d %d", &atividade[caso].hora,
                          &atividade[caso].minuto,
                          &atividade[caso].ocorrencia);
    }

    for ( caso=0; caso<casos; caso++ )
    {
        printf("%02d:%03d", atividade[caso].hora, atividade[caso].minuto);
        if (atividade[caso].ocorrencia==1) {printf(" - A porta abriu!\n"); }
        else if (atividade[caso].ocorrencia==0) {printf(" - A porta fechou!\n"); }
    }

    return 0;
}
