#include <stdio.h>
#include <string.h>

int main() {

    int perguntas, i;
    char pergunta[500];


    scanf("%d", &perguntas);

    while (perguntas>0)
    {
        setbuf(stdin, NULL);
        fgets(pergunta, 500, stdin);
        printf("gzuz\n");

        perguntas--;
    }


    return 0;
}
