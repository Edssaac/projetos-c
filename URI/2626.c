#include <stdio.h>
#include <string.h>

int main() {

//ORDEM:    1°      2°      3°
    char dodo[8], leo[8], pepper[8];


    while ( scanf("%s", dodo) != EOF )
    {
        scanf("%s", leo);
        scanf("%s", pepper);


        if ( strcmp(dodo, leo)==0&&strcmp(dodo,pepper)==0 )
        {
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }

        else if ( strcmp(dodo, "pedra") == 0 )
        {
            if ( strcmp(leo,"tesoura")==0&&strcmp(pepper,"tesoura")==0 ) printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
            else if ( strcmp(leo,"papel")==0&&strcmp(pepper,"pedra")==0 ) printf("Iron Maiden's gonna get you, no matter how far!\n");
            else if ( strcmp(leo,"pedra")==0&&strcmp(pepper,"papel")==0 ) printf("Urano perdeu algo muito precioso...\n");
            else printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }

        else if ( strcmp(dodo, "papel") == 0 )
        {
            if ( strcmp(leo,"pedra")==0&&strcmp(pepper,"pedra")==0 ) printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
            else if ( strcmp(leo,"tesoura")==0&&strcmp(pepper,"papel")==0 ) printf("Iron Maiden's gonna get you, no matter how far!\n");
            else if ( strcmp(leo,"papel")==0&&strcmp(pepper,"tesoura")==0 ) printf("Urano perdeu algo muito precioso...\n");
            else printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }

        else if ( strcmp(dodo, "tesoura") == 0 )
        {
            if ( strcmp(leo,"papel")==0&&strcmp(pepper,"papel")==0 ) printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
            else if ( strcmp(leo,"pedra")==0&&strcmp(pepper,"tesoura")==0 ) printf("Iron Maiden's gonna get you, no matter how far!\n");
            else if ( strcmp(leo,"tesoura")==0&&strcmp(pepper,"pedra")==0 ) printf("Urano perdeu algo muito precioso...\n");
            else printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }
    }


    return 0;
}
