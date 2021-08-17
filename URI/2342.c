#include <stdio.h>
int N, P, Q;
char C;
int main(void)
{
    scanf("%d", &N);
    scanf("%d %c %d", &P, &C, &Q);

    if ( C == '+' )
        printf( ((P+Q)<=N) ? "OK\n" : "OVERFLOW\n" );
    else if ( C == '*' )
        printf( ((P*Q)<=N) ? "OK\n" : "OVERFLOW\n" );

    return 0;
}
