#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <string.h>
#include <conio.h>

#define TRUE 1
#define pass 0

void intro(void) {

    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t  __________________\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |   hollinsgworth  |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |__________________|\n");
    printf("\n\t\t\t\t  press any button...");
    getch();

    return;
}

void home(void) {

    sleep(0.7);
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t  __________________\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |   [1] Jogar      |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |   [2] Opções     |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |   [3] Créditos   |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |   [0] Sair       |\n");
    printf("\t\t\t\t |__________________|\n");
    printf(" Desejo: ");
    setlocale(LC_ALL, "English");

    return;
}

void creditos(void) {

    sleep(0.7);
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t  ______________________________\n");
    printf("\t\t\t |                              |\n");
    printf("\t\t\t |          Créditos...         |\n");
    printf("\t\t\t |                              |\n");
    printf("\t\t\t |    História & Programação    |\n");
    printf("\t\t\t |         >>> Edson            |\n");
    printf("\t\t\t |                              |\n");
    printf("\t\t\t |______________________________|\n");
    setlocale(LC_ALL, "English");

    printf("\n :: Tecle [1] para retornar...\n >>> ");

    return;
}

void opcoes(void) {

    sleep(0.7);
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t  __________________\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |      Opções      |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |    [1] Jogar     |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |    [0] Sair      |\n");
    printf("\t\t\t\t |                  |\n");
    printf("\t\t\t\t |__________________|\n");
    setlocale(LC_ALL, "English");
    printf("\n Desejo: ");

    return;
}

void sair(void) {

    char message[10] = "Saindo...";
    sleep(1);
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t");

    for(int i=0; i<=sizeof(message); i++) {
        printf("%c ", message[i]);
        usleep(200000);
    }

    return;
}

int border() {
    for(int i=0; i<85; i++) { printf("-"); }
    printf("\n");
    return 0;
}


int jogar() {

    char nome[15], classes;

    sleep(1);

    nome[0] = '\0'; //Limpa o Buffer;
    while (strlen(nome) == 0) {

        system("cls");

        border();
        printf("\n\t Bem-vindo a nossa fantástica aventura!\n\n");
        sleep(2.5);
        printf("\t\t ...Como eu devo lhe chamar, jovem aventureiro?\n\n >>> ");

        fgets(nome, 15, stdin);
        nome[strlen(nome) - 1] = '\0'; //apaga o que não está sendo usado;

        //Verifica se realmente teve a entrada de um nome;
        nome[0] == '\n' ? nome[0] = '\0': pass;

//        if (nome[0] == '\n') {
//            nome[0] = '\0';
//        }

    }

    do {
        system("cls");

        border();
        printf(" Olá, %s!", nome);
        printf("\n Qual classe você deseja escolher?\n");
        border();

        printf("\n\n");
        printf("\n\t    :: C L A S S E S ::\n\n");
        printf("\t---------------------------\n");
        printf("\t\t[1] Bárbaro\n");
        printf("\t\t[2] Mago\n");
        printf("\t\t[3] Ladrão\n");
        printf("\t\t[4] Bardo\n");
        printf("\t---------------------------\n");

        printf("\n\n >>> ");
        classes = getchar();

        } while ( ! (classes == '1'||classes == '2'||classes == '3'||classes == '4') );

        printf("\n");
        switch(classes){
            case '1':
                printf(" %s, O Bárbaro... eu gostei!\n", nome);
                break;
            case '2':
                printf(" %s, O Mago... eu gostei!\n", nome);
                break;
            case '3':
                printf(" %s, O Ladrão... eu gostei!\n", nome);
                break;
            case '4':
                printf(" %s, O Bardo... eu gostei!\n", nome);
                break;
            default:
                system("cls");
                printf(" Opção inválida, por favor tente novamente!\n");
                break;
        }

//        classes == '1' ? printf(" %s, O Bárbaro... eu gostei!\n", nome) :
//        classes == '2' ? printf(" %s, O Mago... eu gostei!\n", nome) :
//        classes == '3' ? printf(" %s, O Ladrão... eu gostei!\n", nome) :
//        classes == '4' ? printf(" %s, O Bardo... eu gostei!\n", nome) : 0;



    printf("\n Que a jornada se inicie...");
    system("pause>nul");
    return 0;
}

void main(void) {
    //title nos permite mudar o nome da janela principal;
    system("title Hollingsworth");
    //Dimensoes da janela do terminal; x/y;
    system("mode con:cols=85 lines=30");
    //Mudando as cores do terminal;
    system("color 80");
    //Variaveis;
    char menu, sub_menu;

    //Chamando a função que cria a abertura do jogo;
    intro();

    while (TRUE) {

        home(); //Função que gera o menu principal;
        menu = getchar(); //Lê a opção escolhida do menu;

        //Avaliando a opção escolhida e tomando caminho;
        switch (menu) {
            case '1':
                jogar();
                break;

            case '2':
                do {
                    opcoes();
                    sub_menu = getchar();
                } while (sub_menu != '1' && sub_menu != '0');

                sub_menu == '1' ? jogar() : sair();

                return;
                break;

            case '3':
                do {
                    creditos();
                    sub_menu = getchar();
                } while (sub_menu != '1');

                continue;
                break; //break desnecessario, mas não vou retirar;

            case '0':
                sair();
                return;
                break;

            default:
                continue;
        }
    }

    return;
}
