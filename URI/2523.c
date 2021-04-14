#include <stdio.h>

int main() {

    char alfabeto[26];
    int piscos, num, i;

    while ( scanf("%s", alfabeto) != EOF )
    {
        scanf("%d", &piscos);

        for ( i=0; i<piscos; i++ )
        {
            scanf("%d", &num);

            printf("%c", alfabeto[num-1]);
        }

        printf("\n");
    }

    return 0;
}
