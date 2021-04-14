#include <stdio.h>
#include <string.h>

int main() {

    char sit[12];


    while ( scanf("%s", sit) != EOF )
    {
        setbuf(stdin, NULL);

        if ( strcmp(sit,"esquerda")==0 ) printf("ingles\n");
        else if ( strcmp(sit,"direita")==0 ) printf("frances\n");
        else if ( strcmp(sit,"nenhuma")==0 ) printf("portugues\n");
        else if ( strcmp(sit,"as")==0 ) printf("caiu\n");
    }


    return 0;
}
