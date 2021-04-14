#include <stdio.h>

struct spells {

    int carta[100]; //Deck para cartas de até 100 atributos;

};

int main() {

    //Marcos e Leo;
    int atributos, cartas_marcos, cartas_leo, i, j, escolha_marcos, escolha_leo, escolha_atributo;


    //Lendo quantidade de atributos necessarios;
    while ( scanf("%d", &atributos) != EOF )
    {
        scanf("%d %d", &cartas_marcos, &cartas_leo); //Lendo quantas cartas cada jogador possui;

        struct spells card_marcos[cartas_marcos]; //Criando deck vazio para marcos;
        struct spells card_leo[cartas_leo]; //Criando deck vazio para leo;

        //Lendo o deck de marcos:
        for ( i=0; i<cartas_marcos; i++ )
        {
            for ( j=0; j<atributos; j++ ) scanf("%d", &card_marcos[i].carta[j]);
        }

        //Lendo o deck de leo:
        for ( i=0; i<cartas_leo; i++ )
        {
            for ( j=0; j<atributos; j++ ) scanf("%d", &card_leo[i].carta[j]);
        }

        scanf("%d %d", &escolha_marcos, &escolha_leo); //Lendo a carta escolhida de cada jogador;
        scanf("%d", &escolha_atributo); //Lendo atributo escolhido;

        //Processand o vencedor:
        if ( card_marcos[escolha_marcos-1].carta[escolha_atributo-1] == card_leo[escolha_leo-1].carta[escolha_atributo-1] ) printf("Empate\n");
        else if ( card_marcos[escolha_marcos-1].carta[escolha_atributo-1] > card_leo[escolha_leo-1].carta[escolha_atributo-1] ) printf("Marcos\n");
        else printf("Leonardo\n");
    }


    return 0;
}
