#include <stdio.h>

int main() {

    int habitantes, posicoes, registro, verificacao, aux;

    while ( scanf("%d", &habitantes) != EOF ) //Lendo numero de habitantes, se houver;
    {
        scanf("%d", &posicoes); //Lendo a quantidade de posiçoes desejadas;
        int notas_habitantes[habitantes]; //vetor para as notas dos habitantes;
        int pos[posicoes];  //vetor com para as posicoes;


        for ( registro=0; registro<habitantes; registro++ )
        {   //Lendo as notas individuais de cada habitante:
            scanf("%d", &notas_habitantes[registro]);
        }

        for ( registro=0; registro<posicoes; registro++ )
        {   //Lendo cada posição desejada:
            scanf("%d", &pos[registro]);
        }

        for ( registro = 0; registro < habitantes; registro++ )
        {   //Ordenando em ordem decrescente:
            for ( verificacao = registro; verificacao < habitantes; verificacao++ )
            {
                if ( notas_habitantes[registro] < notas_habitantes[verificacao] )
                {
                    aux = notas_habitantes[registro];
                    notas_habitantes[registro] = notas_habitantes[verificacao];
                    notas_habitantes[verificacao] = aux;
                }
            }
        }

        for ( registro=0; registro<posicoes; registro++ )
        {   //Imprimindo cada posição desejada:
            printf( "%d\n", notas_habitantes[pos[registro]-1] );
        }

    }


    return 0;
}
