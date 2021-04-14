#include <stdio.h>

int main() {

    int casos, caso, comprados, pack, max, i, j;


    scanf("%d", &casos);

    for ( caso=0; caso<casos; caso++ )
    {
        scanf("%d %d", &comprados, &pack);
        max = 0;

        for ( i=comprados; i>=pack; i-=pack )
        {
            max++;
        }

        printf("%d\n", max+i);
    }


    return 0;
}
