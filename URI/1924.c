#include <stdio.h>

int main() {

    int cursos;
    char curso[30];

    scanf("%i", &cursos);

    while (cursos > 0)
    {
        setbuf(stdin, NULL);
        fgets(curso, 30, stdin);

        cursos--;
    }

    printf("Ciencia da Computacao\n");

    return 0;
}
