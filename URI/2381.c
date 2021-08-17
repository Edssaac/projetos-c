#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordem( const void *, const void * );

struct aluno
{
    char nome[21];
};


int main(void)
{
    int N, K, i;
    scanf("%d %d", &N, &K);
    struct aluno alx[N];


    for ( i=0; i<N; i++ )
        scanf("%s", alx[i].nome );

    qsort( alx, N, sizeof(struct aluno), ordem );

    printf("%s\n", alx[K-1].nome );


    return 0;
}

int ordem( const void *a, const void *b )
{
    struct aluno *x = (struct aluno*)a;
    struct aluno *y = (struct aluno*)b;

    return strcmp( x->nome, y->nome );
}

