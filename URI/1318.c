#include <stdio.h>

int main(void)
{
    int n, m;
    int ingressos[20001];
    int i, ingresso, falso;

    while (1)
    {
        scanf("%d %d", &n, &m);

        if ( n==0 && m==0 )
            break;

        memset(ingressos, 0, sizeof(ingressos));

        for ( i=0; i<m; i++ )
        {
            scanf("%d", &ingresso);
            ingressos[ingresso]++;
        }

        for (i = 1, falso = 0; i <= n; ++i)
        {
            if ( ingressos[i]>1 )
                falso++;
        }

        printf("%d\n", falso);
    }

    return 0;
}
