#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int comp( const void *, const void * );

struct frase
{
    char txt[21];
};


int main(void)
{
    long int N, i;

    scanf("%ld", &N);
    struct frase frx[N];


    for ( i=0; i<N; i++ )
    {
        scanf("%s", frx[i].txt );
    }

    qsort( frx, N, sizeof(struct frase), comp );

    for ( i=0; i<N; i++ )
    {
        printf("%s\n", frx[i].txt );
    }

    return 0;
}

int comp( const void *a, const void *b )
{
    char *str1 = (char*)a;
    char *str2 = (char*)b;

    int scmp = strcmp( str1, str2 );
    int scase = strcasecmp( str1, str2 );

    if ( scase < 0 )
        return -1;
    else if ( scase == 0 )
    {
        if ( scmp < 0 )
            return -1;
        else
            return 1;
    }
    else
        return 1;
}



