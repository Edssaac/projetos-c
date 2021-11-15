#include <stdio.h>

int mdc(int a, int b)
{
    return ( b==0 ) ? a : mdc(b, a%b);
}

int main(void)
{
    int n, f1, f2;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1, f2) );
    }

    return 0;
}
