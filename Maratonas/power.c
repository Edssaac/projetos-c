#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, C, i;

    scanf("%d %d", &N, &C);
    char carta;

    int poder = N;
    int A;
    for ( i=0; i<C; i++ )
    {
        fflush(stdin);
        scanf("%c", &carta);

        switch (carta)
        {
            case 'T':
                poder += N;
                printf("-> %d\n", poder);
                break;
            case 'R':
                poder += (N/2) * N;
                printf("-> %d\n", poder);
                break;
            case 'S':
                A = (poder/N);
                N--;
                poder = poder + ((A/2)*N);
                printf("-> %d\n", poder);
                break;
        }
    }

    printf("%d\n", poder);
    return 0;
}
