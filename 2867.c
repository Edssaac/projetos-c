#include <stdio.h>
#include <math.h>

int main()
{
    int c, m, n;

    scanf("%d", &c);
    while(c--)
    {
        scanf("%d %d", &m, &n);

        double digitos = log10(m);
        digitos *= n;

        printf("%.lf\n", floor(digitos)+1);
    }

    return 0;
}
