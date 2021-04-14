#include <stdio.h>
#include <string.h>

struct Escolhas {

    char Sheldon[15], Raj[15];

};

int main() {

    int Casos, caso;
    scanf("%i", &Casos);
    struct Escolhas escolha[Casos];


    for (caso=0; caso<Casos; caso++) {
        scanf("%s %s", escolha[caso].Sheldon, escolha[caso].Raj);
    }

    for (caso=0; caso<Casos; caso++) {

        printf("Caso #%i: ", (caso+1) );

        if ( strcmp(escolha[caso].Sheldon, escolha[caso].Raj) == 0 ) {
            printf("De novo!\n");
        }

        else if ( (strcmp(escolha[caso].Sheldon, "tesoura") == 0 && strcmp(escolha[caso].Raj, "papel") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "papel") == 0 && strcmp(escolha[caso].Raj, "pedra") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "pedra") == 0 && strcmp(escolha[caso].Raj, "lagarto") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "lagarto") == 0 && strcmp(escolha[caso].Raj, "Spock") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "Spock") == 0 && strcmp(escolha[caso].Raj, "tesoura") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "tesoura") == 0 && strcmp(escolha[caso].Raj, "lagarto") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "lagarto") == 0 && strcmp(escolha[caso].Raj, "papel") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "papel") == 0 && strcmp(escolha[caso].Raj, "Spock") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "Spock") == 0 && strcmp(escolha[caso].Raj, "pedra") == 0) ||
                  (strcmp(escolha[caso].Sheldon, "pedra") == 0 && strcmp(escolha[caso].Raj, "tesoura") == 0)
                )
        {
            printf("Bazinga!\n");
        }

        else {
            printf("Raj trapaceou!\n");
        }
    }


    return 0;
}










//#include <stdio.h>
//#include <string.h>
//
//struct Escolhas {
//
//    char Sheldon[15], Raj[15];
//
//};
//
//int main() {
//
//    int Casos, caso;
//    scanf("%i", &Casos);
//    struct Escolhas escolha[Casos];
//
//
//    for (caso=0; caso<Casos; caso++) {
//
//        scanf("%s %s", escolha[caso].Sheldon, escolha[caso].Raj);
//
//    }
//
//    for (caso=0; caso<Casos; caso++) {
//
//        printf("Caso #%i: ", (caso+1) );
//
//        if ( strcmp(escolha[caso].Sheldon, escolha[caso].Raj) == 0 ) {
//            printf("De novo!\n");
//        }
//        else if ( strcmp(escolha[caso].Sheldon, "tesoura") == 0 && strcmp(escolha[caso].Raj, "papel") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "papel") == 0 && strcmp(escolha[caso].Raj, "pedra") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "pedra") == 0 && strcmp(escolha[caso].Raj, "lagarto") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "lagarto") == 0 && strcmp(escolha[caso].Raj, "Spock") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "Spock") == 0 && strcmp(escolha[caso].Raj, "tesoura") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "tesoura") == 0 && strcmp(escolha[caso].Raj, "lagarto") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "lagarto") == 0 && strcmp(escolha[caso].Raj, "papel") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "papel") == 0 && strcmp(escolha[caso].Raj, "Spock") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "Spock") == 0 && strcmp(escolha[caso].Raj, "pedra") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else if ( strcmp(escolha[caso].Sheldon, "pedra") == 0 && strcmp(escolha[caso].Raj, "tesoura") == 0 ) {
//            printf("Bazinga!\n");
//        }
//
//        else {
//            printf("Raj trapaceou!\n");
//        }
//    }
//
//
//    return 0;
//}
