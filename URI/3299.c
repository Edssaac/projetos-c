#include <stdio.h>
#include <string.h>

int main(void) {

    char n[255];

    scanf("%s", n);
    n[strlen(n)] = '\0';

    if (strstr(n, "13")) {
        printf("%s es de Mala Suerte\n", n);
    } else {
        printf("%s NO es de Mala Suerte\n", n);
    }

    return 0;
}
