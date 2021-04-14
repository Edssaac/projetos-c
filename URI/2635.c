#include <stdio.h>
#include <string.h>

struct database {
    char busca[105];

    int sugestoes, tam;
};

int main() {

    int pesquisas, pesquisa, consultas, consulta;


    while ( scanf("%d", &pesquisas) != EOF ) //Lendo quantidade de pesquisas a serem realizadas;
    {
        struct database request[pesquisas]; //Criando um "banco de dados" para os termos pesquisados;

        for ( pesquisa=0; pesquisa<pesquisas; pesquisa++ ) //Lendo cada termo pesquisado:
        {
            scanf("%s", request[pesquisa].busca);
        }

        scanf("%d", &consultas); //Lendo quantidade de consultas a serem realizadas;
        struct database response[consultas]; //Criando um "banco de dados" para os termos consultados;

        for ( pesquisa=0; pesquisa<consultas; pesquisa++ ) //Lendo cada consulta pesquisada:
        {
            scanf("%s", response[pesquisa].busca);
        }


        //Analise dos dados:
        for ( consulta=0; consulta<consultas; consulta++ )
        {
            response[consulta].sugestoes = response[consulta].tam = 0; //Zerando as variaveis a serem usadas;
            for ( pesquisa=0; pesquisa<pesquisas; pesquisa++ )
            {
                //Comparando as strings:
                if ( strncmp( response[consulta].busca, request[pesquisa].busca, strlen(response[consulta].busca) ) == 0)
                {
                    response[consulta].sugestoes++;

                    if ( strlen(request[pesquisa].busca) > response[consulta].tam ) response[consulta].tam = strlen(request[pesquisa].busca);
                }
            }

            //Imprimindo:
            if ( response[consulta].sugestoes > 0 ) printf("%d %d\n", response[consulta].sugestoes, response[consulta].tam);
            else printf("-1\n");
        }
    }





    return 0;
}
