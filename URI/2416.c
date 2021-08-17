#include <stdio.h>

int main(void)
{
    unsigned long long int C;
    int N;

    scanf("%llu %d", &C, &N);
    printf("%d\n", (C%N) );

    return 0;
}
