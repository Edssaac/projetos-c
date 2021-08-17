#include <stdio.h>
#include <math.h>

int rafael( int x, int y )
{
    return pow(( 3*x ), 2) + pow(y, 2);
}

int beto( int x, int y )
{
    return ( 2 * pow(x, 2) + pow( (5*y), 2) );
}

int carlos( int x, int y )
{
    return ( -100*x + pow(y, 3) );
}

int main(void)
{
    int r, b, c, x, y, N;

    scanf("%d", &N);
    while ( N-- )
    {
        scanf("%d %d", &x, &y);
        r = rafael(x,y);
        b = beto(x,y);
        c = carlos(x,y);

        if ( r>b && r>c )
            printf("Rafael ganhou\n");
        else if ( b>r && b>c )
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }

    return 0;
}

