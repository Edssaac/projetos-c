#include <stdio.h>

int main() {

    int i, medidas, medida, medida_salva, falha=0;


    scanf("%d", &medidas);
    scanf("%d", &medida);
    medida_salva = medida;

    for ( i=2; i<=medidas; i++ )
    {
        scanf("%d", &medida);

        if (medida < medida_salva && falha==0)
            falha=i;
        else
            medida_salva = medida ;
    }

    printf("%d\n", falha);


    return 0;
}
