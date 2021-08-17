#include <stdio.h>

struct presente
{
    int id;
    int volume;
};

int ordem( const void *a, const void *b )
{
    struct presente *x = (struct presente*)a;
    struct presente *y = (struct presente*)b;

    if ( x->volume > y->volume )
        return -1;
    else if ( x->volume == y->volume )
    {
        if ( x->id < y->id )
            return -1;
        else
            return 1;
    }
    else
        return 1;
}

int comp( const void *a, const void *b )
{
    int *x = (int*)a;
    int *y = (int*)b;

    if ( *x < *y )
        return -1;
    else
        return 1;
}


int main(void)
{
    int T, N, K;
    int H, W, L;
    int i;

    scanf("%d", &T);
    while( T-- )
    {
        scanf("%d %d", &N, &K);
        struct presente psx[N];
        int id[K];

        for ( i=0; i<N; i++ )
        {
            scanf("%d %d %d %d", &psx[i].id, &H, &W, &L);
            psx[i].volume = H*W*L;
        }

        qsort( psx, N, sizeof(struct presente), ordem );

        for ( i=0; i<K; i++ )
            id[i] = psx[i].id;

        qsort( id, K, sizeof(id[0]), comp );

        for ( i=0; i<K; i++ )
        {
            if ( i>0 )
                printf(" ");

            printf("%d", id[i]);
        }

        printf("\n");
    }

    return 0;
}
