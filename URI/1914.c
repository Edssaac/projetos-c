#include <stdio.h>
#include <string.h>

struct dados {

    char nome1[20], nome2[20];
    char escolha1[5] , escolha2[5];
    long long int valor1, valor2;

};

int main() {

    int casos, i, soma;
    scanf("%i", &casos);
    struct dados caso[casos];


    for (i=0; i<casos; i++)
    {
        scanf("%s %s", &caso[i].nome1, &caso[i].escolha1);
        scanf("%s %s", &caso[i].nome2, &caso[i].escolha2);
        scanf("%lld %lld", &caso[i].valor1, &caso[i].valor2);
    }

    for (i=0; i<casos; i++)
    {
        soma = caso[i].valor1+caso[i].valor2;
       // printf(">%i %i", soma, soma%2);

        if ( (strcmp(caso[i].escolha2, "PAR") == 0 && soma%2 == 0) || (strcmp(caso[i].escolha2, "IMPAR") == 0 && soma%2 != 0) )
        {
            printf("%s\n", caso[i].nome2);
        }
        else { printf("%s\n", caso[i].nome1); }
    }


    return 0;
}
