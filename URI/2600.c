#include <stdio.h>
#include <stdlib.h>

int ordem( const void*a, const void*b)
{
    if ( *(int*)a > *(int*)b )
        return 1;
    else if ( *(int*)a == *(int*)b )
        return 0;
    else
        return -1;
}

int main(void)
{
    int N, i, ok;
    int dadoOK[6] = { 1, 2, 3, 4, 5, 6 };
    //int *dado;

    scanf("%d", &N);
    while ( N-- )
    {
        //dado = malloc( 6 * sizeof(int) );
        int dado[6];
        for ( i=0; i<6; i++ )
            scanf("%d", &dado[i]);

        if ( dado[0]+dado[5] == 7 &&
             dado[1]+dado[3] == 7 &&
             dado[2]+dado[4] == 7
           )
            ok=1;
//        else
//            ok=0;

        qsort( dado, 6, sizeof(int), ordem );
        for ( i=0; i<6; i++ )
            if ( dadoOK[i] != dado[i] )
            {
                ok=0;
                break;
            }

        printf( (ok==1) ? "SIM\n" : "NAO\n" );

        //free(dado);
        ok=0;
    }

    return 0;
}



