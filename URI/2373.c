#include <stdio.h>


int main(void)
{
    int N, L, C, Q=0;


    scanf("%d", &N);
    while ( N-- )
    {
        scanf("%d %d", &L, &C);

        if ( L > C )
            Q += C;
    }

    printf("%d\n", Q);

    return 0;
}
