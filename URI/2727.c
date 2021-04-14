#include <stdio.h>
#include <string.h>

int main() {

    char cod[150], cifrado[150], alfabeto[26] = "abcdefghijklmnopqrstuvwxyz";
    int letras, letra, i, espacos, pontos, x;


    while ( scanf("%d", &letras) != EOF )
    {
        cifrado[0] = '\0';

        for ( letra=0; letra<letras; letra++ )
        {
            espacos=pontos=0;

            //Limpando o Buffer, lendo o codigo e depois excluindo a quebra de linha:
            setbuf(stdin, NULL);
            fgets(cod, 60, stdin);
            cod[ strlen(cod)-1 ] = '\0';

            for ( i=0; i<strlen(cod); i++ ) //Processando a quantidade de espaços:
                if ( cod[i]==' ' ) espacos++;

            for ( i=0; i<strlen(cod); i++ ) //Processando sequencia de pontos:
                if ( cod[i]!=' ' ) pontos++;
                else break;

            //Processando e imprimindo a letra cifrada:
            x = pontos + 3*espacos;
            cifrado[letra] = alfabeto[x-1];
            printf("%c\n", cifrado[letra]);
        }

        //for ( i=0; i<letras; i++ ) printf("%d %c\n", i, cifrado[i]);
        //printf("\n");
    }


    return 0;
}
