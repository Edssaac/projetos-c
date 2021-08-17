#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp( const void *, const void * );

struct carne
{
    char nome[21];
    int validade;
};


int main(void)
{
    int qCarnes, i;


    while ( scanf("%d", &qCarnes) != EOF )
    {
        struct carne cnx[qCarnes];

        for ( i=0; i<qCarnes; i++ )
        {
            scanf("%s %d", cnx[i].nome, &cnx[i].validade);
        }

        qsort( cnx, qCarnes, sizeof(struct carne), comp );

        for ( i=0; i<qCarnes; i++ )
        {
            if ( i == qCarnes-1 )
                printf("%s", cnx[i].nome);
            else
                printf("%s ", cnx[i].nome);
        }

        printf("\n");
    }

    return 0;
}


int comp( const void *a, const void *b )
{
    struct carne *x = (struct carne*)a;
    struct carne *y = (struct carne*)b;

    if ( x->validade < y->validade )
        return -1;
    else if ( x->validade == y->validade )
        return 0;
    else
        return 1;
}

