#include <stdio.h>

int main() {

    int senha;

    while ( scanf("%d", &senha) != EOF )
    {
       printf("%d\n", --senha);
    }

    return 0;
}
