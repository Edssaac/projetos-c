#include <stdio.h>

int mdc(int, int);

int main(void){

    int N, x, n1, d1, n2, d2, res, num, den;
    char op;

    scanf("%d", &N);

    while (N--)
    {       //  1 /  2 +   3 / 4
        scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

        if( op == '/' )
        {
            num = d1*n2;
            den = n1*d2;
            res = mdc(den,num);
                 // 1 / 2 + 3 / 4
            printf("%d/%d = %d/%d\n", den, num, (den/res), (num/res));
        }
        else
        {
            num = d1*d2;

            if( op == '+' )
                den = n1*(num/d1) + n2*(num/d2);
            else if( op == '-' )
                den = n1*(num/d1) - n2*(num/d2);
            else if( op == '*' )
                den = n1*n2;

            res = mdc(den,num);
            if( res<0 )
                res*= -1;

            printf("%d/%d = %d/%d\n", den, num, (den/res), (num/res));
        }
    }

    return 0;
}

int mdc(int a, int b)
{
    return ( b==0 ) ? a : mdc(b, a%b);
}
