#include <stdio.h>

int main() {

    int arvores, h, d, g;


    scanf("%d", &arvores);

    while (arvores>0)
    {
        scanf("%d %d %d", &h, &d, &g);

        if ( (h>=200&&h<=300) && (d>=50) && (g>=150) ) printf("Sim\n");
        else printf("Nao\n");

        arvores--;
    }


    return 0;
}
