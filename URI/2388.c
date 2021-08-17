#include <stdio.h>

int main(void)
{
    int N, T, V, total=0;


    scanf("%d", &N);
    while ( N-- )
    {
        scanf("%d %d", &T, &V);

        total += T*V;
    }

    printf("%d\n", total);

    return 0;
}
