#include <stdio.h>

int main() {

    char string[300];

    setbuf(stdin, NULL);
    fgets(string, 300, stdin);

    puts("Nao se refuta ciencia com opiniao");


    return 0;
}
