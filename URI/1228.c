#include <stdio.h>


int main()
{
    int N, i;
    int j, k;
    int aux;
    int ultra;

    while( (scanf("%d", &N) != EOF) )
    {
        int inicio[N];
        int fim[N];
        ultra = 0;


        for( i=0; i<N; i++ )
            scanf("%d", &inicio[i]);

        for( i=0; i<N; i++ )
            scanf("%d", &fim[i]);


        for ( i=0; i<N; i++ )
        {
            for (j=0; j<N; j++ )
            {
                if ( fim[i]==inicio[j] )
                {
                    aux = (j) - (i);
//                    printf("carro: %d  place: %d ", inicio[j], j+1);
//                    printf("carro: %d  place: %d e ", fim[i], i+1);
//                    printf("== %d\n", aux);

                    if ( aux > 0 )
                        ultra += aux;
                    else if ( aux == 0 )
                    {
                        printf("")
                        if ( (i+1 < N) && (j+1 < N) )
                            if ( fim[i+1] != inicio[j+1] )
                                ultra++;
                    }
                }
            }
        }



        printf(" - %d\n", ultra);
    }


    return 0;
}



