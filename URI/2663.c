#include <stdio.h>

int main() {

    int candidatos, posicoes, i, j, aux;
    scanf("%d\n%d", &candidatos, &posicoes);
    int notas[candidatos];

    //Lendo as notas:
    for ( i=0; i<candidatos; i++ )
        scanf("%d", &notas[i]);

    //Botando em ordem decrescente:
    for ( i=0; i<candidatos; i++ )
        for ( j=i; j<candidatos; j++ )
            if (notas[i] < notas[j])
            {
                aux = notas[i];
                notas[i] = notas[j];
                notas[j] = aux;
            }

    //Verificando quantos passarão de fase:
    for ( i=posicoes-1; i<candidatos; i++ )
    {
        if ( notas[i] == notas[i+1] ) posicoes++;
        else break;
    }

    printf("%d\n", posicoes);

    return 0;
}
