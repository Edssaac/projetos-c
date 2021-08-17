#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int comp( const void *, const void * );

struct aluno
{
    char nome[101];
    char reg;
    int custo;
};


int main(void)
{
    int qAlunos, i;


    while ( scanf("%d", &qAlunos) != EOF )
    {
        struct aluno alx[qAlunos];

        for ( i=0; i<qAlunos; i++ )
        {
            scanf("%s %c %d", alx[i].nome, &alx[i].reg, &alx[i].custo );
        }

        qsort( alx, qAlunos, sizeof(struct aluno), comp );

        for ( i=0; i<qAlunos; i++ )
        {
            printf("%s\n", alx[i].nome);
        }
    }

    return 0;
}

int comp( const void *a, const void *b )
{
    struct aluno *x = (struct aluno*)a;
    struct aluno *y = (struct aluno*)b;

    if ( x->custo < y->custo )
        return -1;
    else if ( x->custo == y->custo )
    {
        if ( x->reg < y->reg )
            return -1;
        else if ( x->reg == y->reg )
            return strcmp( x->nome, y->nome );
        else
            return 1;
    }
    else
        return 1;
}
