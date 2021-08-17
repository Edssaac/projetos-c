#include <stdio.h>


int main(void)
{
    int C, P, F;


    scanf("%d %d %d", &C, &P, &F);

    printf( ((C*F) <= P) ? "S\n" : "N\n" );

    return 0;
}
