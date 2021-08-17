#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordem( const void *, const void * );

struct livro
{
    char codigo[5];
};


int main(void)
{
    int N, i;


    while ( (scanf("%d", &N) != EOF) )
    {
        struct livro lvx[N];

        for ( i=0; i<N; i++ )
            scanf("%s", lvx[i].codigo );

        qsort( lvx, N, sizeof(struct livro), ordem );

        for ( i=0; i<N; i++ )
            printf("%s\n", lvx[i].codigo );

    }

    return 0;
}

int ordem( const void *a, const void *b )
{
    struct livro *x = (struct livro*)a;
    struct livro *y = (struct livro*)b;

    return strcmp( x->codigo, y->codigo );
}
