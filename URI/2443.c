#include <stdio.h>

typedef struct{
    int dividendo, divisor;
} fracao;

int mdc(int, int);
fracao soma(fracao, fracao);
fracao divisao(fracao);

int main(void)
{
    fracao f1, f2, res;

    scanf("%d %d %d %d", &f1.dividendo, &f1.divisor, &f2.dividendo, &f2.divisor);

    res = soma(f1, f2);
    res = divisao(res);

    printf("%d %d\n", res.dividendo, res.divisor);

    return 0;
}

int mdc(int m, int n)
{
    if ( m<0 )
        m*= -1;
    if ( n<0 )
        n*= -1;

    if ( m%n == 0 )
        return n;
    else
        return mdc(n, m%n);
}

fracao soma(fracao f1, fracao f2)
{
    fracao res;

    res.dividendo = f1.dividendo * f2.divisor + f2.dividendo * f1.divisor;
    res.divisor = f1.divisor * f2.divisor;

    return res;
}

fracao divisao(fracao x)
{
    fracao res;

    res.dividendo = x.dividendo/mdc(x.dividendo, x.divisor);
    res.divisor = x.divisor/mdc(x.dividendo, x.divisor);

    return res;
}
