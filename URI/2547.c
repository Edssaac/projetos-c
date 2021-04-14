#include <stdio.h>

int main() {

    int visitantes, altura_max, altura_min, altura, tickets, i;


    while ( scanf("%d", &visitantes) != EOF )
    {
        scanf("%d %d", &altura_min, &altura_max);

        tickets=0;
        for ( i=0; i<visitantes; i++ )
        {
            scanf("%d", &altura);

            if (altura>=altura_min&&altura<=altura_max) tickets++;
        }

        printf("%d\n", tickets);
    }


    return 0;
}
