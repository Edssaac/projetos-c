//G - Todo Mundo tem que Estar Feliz nesse Natal!
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[70], presente[70];
    int distancia;

} lista;

int ordenar( const void *a, const void *b )
{
    lista *c1 = (lista*)a;
    lista *c2 = (lista*)b;

    if ( c1->distancia < c2->distancia )
        return -1;
    else if ( c1->distancia == c2->distancia )
        return 0;
    else
        return 1;
}

int main(void)
{
    int N, i;

    scanf("%d", &N);
    lista criancas[N];

    for ( i=0; i<N; i++ )
    {
        scanf("%s %s %d", criancas[i].nome, criancas[i].presente, &criancas[i].distancia);
    }

    qsort( criancas, N, sizeof(criancas[0]), ordenar );

    for ( i=0; i<N; i++ )
    {
        printf("%s %s %d\n", criancas[i].nome, criancas[i].presente, criancas[i].distancia);
    }

    return 0;
}
