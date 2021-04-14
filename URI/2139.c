#include <stdio.h>

int main() {

    int mes, dia, dias=0;


    while ( scanf("%d", &mes) != EOF )
    {
        scanf("%d", &dia);

        if ( mes==12 && dia==25 ) { printf("E natal!\n"); }
        else if ( mes==12 && dia==24 ) { printf("E vespera de natal!\n"); }
        else if ( mes==12 && dia>25 ) { printf("Ja passou!\n"); }
        else
        {
            switch (mes)
            {
                case 1:
                    dias = 366 - dia;
                    break;
                case 2:
                    dias = 366 - (31+dia);
                    break;
                case 3:
                    dias = 366 - (60+dia);
                    break;
                case 4:
                    dias = 366 - (91+dia);
                    break;
                case 5:
                    dias = 366 - (121+dia);
                    break;
                case 6:
                    dias = 366 - (152+dia);
                    break;
                case 7:
                    dias = 366 - (182+dia);
                    break;
                case 8:
                    dias = 366 - (213+dia);
                    break;
                case 9:
                    dias = 366 - (244+dia);
                    break;
                case 10:
                    dias = 366 - (274+dia);
                    break;
                case 11:
                    dias = 366 - (305+dia);
                    break;
                case 12:
                    dias = 366 - (335+dia);
                    break;
            }

            printf("Faltam %d dias para o natal!\n", dias);
        }

    }


    return 0;
}
