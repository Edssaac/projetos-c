#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ordem( const void *, const void * );

struct aluno
{
    char nome[100];
    char cor[9];
    char tam;
};

int main(void)
{
    int N, i, x=0;


    do
    {
        scanf("%d", &N);
        if ( N == 0)
            break;

        struct aluno alx[N];


        for ( i=0; i<N; i++ )
        {   getchar();
            gets(alx[i].nome);
            scanf("%s %c", alx[i].cor, &alx[i].tam);
        }

        qsort( alx, N, sizeof(struct aluno), ordem );

        if (x>0)
            printf("\n");
        for ( i=0; i<N; i++ )
            printf("%s %c %s\n", alx[i].cor, alx[i].tam, alx[i].nome);

    x++;
    } while (1);

    return 0;
}

int ordem( const void *a, const void *b )
{
    struct aluno *x = (struct aluno*)a;
    struct aluno *y = (struct aluno*)b;


    if ( strcmp(x->cor, y->cor) < 0 )
        return -1;
    else if ( strcmp(x->cor, y->cor) == 0 )
    {
        if ( x->tam > y->tam )
            return -1;
        else if ( x->tam == y->tam )
        {
            return strcmp(x->nome, y->nome);
        }
        else
            return 1;
    }
    else
        return 1;


}
