#include <stdio.h>
#include <string.h>

struct notas {
    double nota;
};

struct dados {
    char nome[50];
    double dificuldade;
    double maior_nota, menor_nota, soma_notas, nota_final;

    struct notas nota[7];
};

int main() {

    int competidores, avaliacao, i;
    scanf("%d", &competidores);
    struct dados competidor[competidores];


    for ( avaliacao=0; avaliacao<competidores; avaliacao++ )
    {
//        setbuf(stdin, NULL); //Limpando o buffer;
//
//        fgets( competidor[avaliacao].nome, 50, stdin ); //Lendo o nome;
//        competidor[avaliacao].nome[ strlen(competidor[avaliacao].nome)-1 ] = '\0'; //Excluindo a quebra de linha capturada ao armazenar o nome;

        scanf("%s", competidor[avaliacao].nome);

        scanf("%lf", &competidor[avaliacao].dificuldade); //Lendo o grau de dificuldade;

        competidor[avaliacao].soma_notas = competidor[avaliacao].maior_nota = 0; //Zerando as variaveis necessarias;

        for ( i=0; i<7; i++ )
        {
            scanf("%lf", &competidor[avaliacao].nota[i].nota ); //Lendo as notas;
            if ( competidor[avaliacao].nota[i].nota > competidor[avaliacao].maior_nota ) //Separando a maior nota;
                { competidor[avaliacao].maior_nota = competidor[avaliacao].nota[i].nota; }

            competidor[avaliacao].soma_notas+=competidor[avaliacao].nota[i].nota; //Somando todas as notas;
        }

        competidor[avaliacao].menor_nota = competidor[avaliacao].maior_nota; //Passando a maior nota para a variavel da menor nota, para que assim possamos comparar com as demais e encontrar a menor delas;
        for ( i=0; i<7; i++ ) //Encontrando a menor nota;
        {
            if ( competidor[avaliacao].nota[i].nota < competidor[avaliacao].menor_nota ) //Separando a menor nota;
                { competidor[avaliacao].menor_nota = competidor[avaliacao].nota[i].nota; }
        }

        //Calculando a nota final:
        competidor[avaliacao].nota_final = ((competidor[avaliacao].soma_notas) - (competidor[avaliacao].maior_nota+competidor[avaliacao].menor_nota)) * competidor[avaliacao].dificuldade;
    }

    //Imprimindo os dados processados:
    for ( avaliacao=0; avaliacao<competidores; avaliacao++ )
    {
        printf("%s %.2lf\n", competidor[avaliacao].nome, competidor[avaliacao].nota_final);
    }


    return 0;
}

