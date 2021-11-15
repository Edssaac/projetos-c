#include <stdio.h>

int main(void)
{
    int nNumeros, i, j;


    scanf("%d", &nNumeros);
    int numeros[nNumeros];
    long int resultado=0;
    int x = 0;

    for ( i=0; i<nNumeros; i++ )
    {
        scanf("%d", &numeros[i]);
        resultado += numeros[i];

        if ( numeros[i] == 0 )
        {
            resultado -= numeros[x];
            numeros[x] = 0;
            for ( j=x; j>=0; j-- )
                if ( numeros[j] != 0 )
                {
                        x = j;
                        break;
                }
        }
        else
            x=i;
    }

    printf("%ld\n", resultado);

    return 0;
}
