#include <stdio.h>
#include <stdlib.h>

int ordem( const void*, const void* );

int main(void)
{
    int casos, alunos, fila, i, dif;

    scanf("%d", &casos);
    while (casos--)
    {
        scanf("%d", &alunos);
        dif = alunos;
        int fila[alunos];
        int aux[alunos];

        for ( i=0; i<alunos; i++ )
        {
            scanf("%d", &fila[i]);
            aux[i] = fila[i];
        }

        qsort( fila, alunos, sizeof(fila[0]), ordem );

        for ( i=0; i<alunos; i++ )
        {
            if ( aux[i] != fila[i] )
                dif--;
        }

        printf("%d\n", dif);
    }

    return 0;
}

int ordem( const void *a, const void *b)
{
    a = *(int*)a;
    b = *(int*)b;

    if ( a>b )
        return -1;
    else if ( a==b )
        return 0;
    else
        return 1;
}
