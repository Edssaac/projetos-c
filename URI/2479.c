#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordem( const void *, const void * );

struct crianca
{
    char nome[21];
};


int main(void)
{
    int N, i, comportamento[2] = {0} ;
    char cod;
    scanf("%d", &N);
    struct crianca crx[N];


    for ( i=0; i<N; i++ )
    {
        scanf(" %c", &cod);
        scanf("%s", crx[i].nome );

        switch (cod)
        {
            case '+':
                comportamento[0]++;
                break;
            case '-':
                comportamento[1]++;
                break;
        }
    }

    qsort( crx, N, sizeof(struct crianca), ordem );

    for ( i=0; i<N; i++ )
        printf("%s\n", crx[i].nome );

    printf("Se comportaram: %d | Nao se comportaram: %d\n", comportamento[0], comportamento[1] );

    return 0;
}

int ordem( const void *a, const void *b )
{
    struct crianca *x = (struct crianca*)a;
    struct crianca *y = (struct crianca*)b;

    return strcmp( x->nome, y->nome );
}

