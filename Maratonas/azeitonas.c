#include <stdio.h>

int main(void)
{
    int x, y;

    scanf("%d %d", &x, &y);

    if(x <= 0 || y <= 0 || x == y)
        puts("ERRO");
    else
    {
        printf("%d %d\n", x, y);
        printf("%d %d\n", y, x);
        printf("%d %d\n", y, (-1*x));
        printf("%d %d\n", x, (-1*y));
        printf("%d %d\n", (-1*x), (-1*y));
        printf("%d %d\n", (-1*y), (-1*x));
        printf("%d %d\n", (-1*y), x);
        printf("%d %d\n", (-1*x), y);
    }

    return 0;
}
