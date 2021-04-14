#include <stdio.h>
#include <string.h>

int main() {

    char nome[500];


    scanf("%[^\n]s", nome);

    if ( strlen(nome) > 80 )
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }


    return 0;
}

