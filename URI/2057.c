#include <stdio.h>

int main(void) {

    int HoraSaida, TempoViagem, FusoHorario, HoraLocal;


    scanf("%d %d %d", &HoraSaida, &TempoViagem, &FusoHorario);

    HoraLocal = HoraSaida + TempoViagem;

    if (HoraLocal > 24)
    {
        HoraLocal-=24;
    }

    HoraLocal+=FusoHorario;

    if (HoraLocal < 0)
    {
       HoraLocal+=24;
    }

    printf("%d\n", HoraLocal);


    return 0;
}
