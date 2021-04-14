#include <stdio.h>
#include <string.h>

int main() {

    char cpf[15];
    int i;


    while ( scanf("%s", cpf) != EOF )
    {
        for ( i=0; i<strlen(cpf); i++ )
        {
            if ( cpf[i] == '.' || cpf[i] == '-' ) printf("\n");
            else printf("%c", cpf[i]);
        }

        printf("\n");
    }


    return 0;
}
