#include <stdio.h>

struct combustiveis {

    int alcool, gasolina, diesel;

};

//int main() {
//
//    char opc;
//    struct combustiveis tipo;
//
//    tipo.gasolina = tipo.alcool = tipo.diesel = 0;
//
//    while (1)
//    {
//        setbuf(stdin, NULL);
//        scanf(" %c", &opc);
//
//        switch (opc)
//        {
//            case '1':
//                tipo.alcool++;
//                continue;
//                break;
//            case '2':
//                tipo.gasolina++;
//                continue;
//                break;
//            case '3':
//                tipo.diesel++;
//                continue;
//                break;
//            case '4':
//                break;
//            default:
//                continue;
//                break;
//        }
//
//        printf("MUITO OBRIGADO\n");
//        printf("Alcool: %d\n", tipo.alcool);
//        printf("Gasolina: %d\n", tipo.gasolina);
//        printf("Diesel: %d\n", tipo.diesel);
//
//        return 0;
//    }
//
//    return 0;
//}

//OU!!!

int main() {
    char opc;
    struct combustiveis tipo;

    tipo.gasolina = tipo.alcool = tipo.diesel = 0;

    do {
        setbuf(stdin, NULL);
        scanf(" %c", &opc);

        switch (opc)
        {
            case '1':
                tipo.alcool++;
                continue;
                break;
            case '2':
                tipo.gasolina++;
                continue;
                break;
            case '3':
                tipo.diesel++;
                continue;
                break;
            case '4':
                break;
            default:
                continue;
                break;
        }

    } while (opc != '4');

        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", tipo.alcool);
        printf("Gasolina: %d\n", tipo.gasolina);
        printf("Diesel: %d\n", tipo.diesel);

    return 0;
}
