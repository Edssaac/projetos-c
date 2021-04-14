#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char linha[15], *valor;
    int linhas, letra, soma=0;


    scanf("%d", &linhas);

    while ( linhas-- )
    {
        setbuf(stdin, NULL );
        scanf("%s", linha);

        for ( letra=0; letra<15; letra++ )
            if ( isalpha(linha[letra]) )
                linha[letra] = ' ';

        valor = strtok(linha, " ");

        while ( valor != NULL )
        {
            soma += atoi( valor );
            valor = strtok(NULL, " ");
        }

        printf("%d\n", soma);
        soma = 0;
    }

    return 0;
}
