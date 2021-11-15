#include <stdio.h>

int palindromo(int n, int b)
{
    char ret[35];
    int tam=0;
    int i, j, k;

    i=0;
    while (n)
    {
        int resto = n%b;

        ret[i++] = (resto<=9) ? (resto+'0') : ((resto-10)+'a');

        n /= b;
        tam++;
    }

    ret[tam] =  'x';

    for ( k=0, j=tam-1; k<j; k++, j-- )
        if ( ret[j] != ret[k] )
            return 0;

    return 1;
}

int main()
{
    int cases, flag, n, i, j;
    int bases[16];

    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d", &n);
        flag = 0;
        for ( i=2, j=0; i<=16; i++ )
        {
            if (palindromo(n, i))
            {
                bases[j++] = i;
                flag = 1;
            }
        }

        if (j==0)
            puts("-1");
        else
        {
            for ( i=0; i<j; i++ )
            {
                if ( i==(j-1))
                    printf("%d", bases[i]);
                else
                    printf("%d ", bases[i]);
            } puts("");
        }
    }
}
