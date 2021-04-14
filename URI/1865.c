#include <stdio.h>
#include <string.h>

struct testes {

    char nome[15];
    int forca;

};

int main() {

    int casos, caso;
    scanf("%i", &casos);
    struct testes teste[casos];


    for (caso=0; caso<casos; caso++)
    {
        scanf("%s", &teste[caso].nome);
        scanf("%i", &teste[caso].forca);
    }

    for (caso=0; caso<casos; caso++)
    {
        ( strcmp(teste[caso].nome, "Thor") == 0 ) ? printf("Y\n") : printf("N\n");
    }

    return 0;
}
