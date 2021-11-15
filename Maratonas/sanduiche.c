#include <stdio.h>


int main(void)
{
    int N, M, f, t, i;

    scanf("%d %d", &N, &M);
    f=N;

    for (i=0; i<M*2; i++)
        scanf("%d", &t);

    do
    {
       f *= (N-1);
       N--;
    } while (N>1);

    t = (M==0) ? (f+1) : ((f+1) - (M+1)) ;
    printf("%d\n", t);

    return 0;
}
