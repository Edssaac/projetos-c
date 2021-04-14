#include <stdio.h>

struct dados { //Tipo de dados para os casos de teste;

    int quantidade;
    char tipo;

};

struct dados_cobaias { //Tipo de dados para informações das cobaias;

    int total, coelhos, ratos, sapos;

};

int main() {

    int casos, i;
    scanf("%i", &casos); //Lendo o numero de casos;
    struct dados experimento[casos]; //Criando array com o numero de casos;
    struct dados_cobaias cobaias; //Criando variavel com o struct criado para as informações das cobaias;

    cobaias.total = cobaias.coelhos = cobaias.ratos = cobaias.sapos = 0; //Inicializando;


    for (i=0; i<casos; i++) {

        scanf("%i %c", &experimento[i].quantidade, &experimento[i].tipo); //Lendo os testes;

        //Processando os dados armazenados;
        cobaias.total += experimento[i].quantidade;

        switch (experimento[i].tipo) {
            case 'C':
                cobaias.coelhos += experimento[i].quantidade;
                break;
            case 'R':
                cobaias.ratos += experimento[i].quantidade;
                break;
            case 'S':
                cobaias.sapos += experimento[i].quantidade;
                break;
            default:
                break;
        }

    }

    //Imprimindo as saidas;
    printf("Total: %i cobaias\n", cobaias.total);
    printf("Total de coelhos: %i\n", cobaias.coelhos);
    printf("Total de ratos: %i\n", cobaias.ratos);
    printf("Total de sapos: %i\n", cobaias.sapos);
    printf("Percentual de coelhos: %.2f %%\n", (cobaias.coelhos*100.00) / cobaias.total );
    printf("Percentual de ratos: %.2f %%\n", (cobaias.ratos*100.00) / cobaias.total );
    printf("Percentual de sapos: %.2f %%\n", (cobaias.sapos*100.00) / cobaias.total );


    return 0;
}
