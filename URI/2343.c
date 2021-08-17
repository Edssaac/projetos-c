#include <stdio.h>

int raios[501][501] = {0};

int main()
{
    int N, x, y, i=0;


    scanf("%d", &N);
    while ( N-- )
    {
        scanf("%d %d", &x, &y);
        raios[x][y]++;

        if ( raios[x][y] >= 2 )
            i=1;
    }

    printf("%d\n", i);

    return 0;
}
