#include <stdio.h>

int main() {

    int casos, caso, i, j, x, tamanho;


    scanf("%d", &casos);
    for ( caso=0; caso<casos; caso++  )
    {
        scanf("%d", &tamanho);
        int lista[tamanho];

        j=-1;
        for ( i=0; i<tamanho; i++ )
        {
            scanf("%d", &x);
            if ( x%2!=0 )
            {
                j++;
                lista[j] = x;
            }
        }

        x=j;

        for ( i=0; i<=x; i++ )
            for ( j=i; j<=x; j++ )
                if ( lista[i]<lista[j] )
                {
                    tamanho = lista[i];
                    lista[i] = lista[j];
                    lista[j] = tamanho;
                }


        for ( i=0, j=x; i<=(x/2) && x!=-1 ; i++, j-- )
        {
            printf("%d", lista[i]);
            if ( i==j ) break;
            printf(" %d", lista[j]);

            if ( i!=(x/2) ) printf(" ");
        }

        printf("\n");

    }


    return 0;
}
