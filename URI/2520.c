#include <stdio.h>


int main() {

    int linhas, colunas, linha, coluna, segundos;
    int pos_analogimon[2], pos_jogador[2];

    while ( scanf("%d", &linhas) != EOF )
    {
        scanf("%d", &colunas);
        int cidade[linhas][colunas];
        segundos = 0;

        for ( linha=0; linha<linhas; linha++ )
        {
            for ( coluna=0; coluna<colunas; coluna++ )
            {
                scanf("%d", &cidade[linha][coluna]);
                if (cidade[linha][coluna] == 2)
                {
                    pos_analogimon[0] = linha+1;
                    pos_analogimon[1] = coluna+1;
                }
                else if (cidade[linha][coluna] == 1)
                {
                    pos_jogador[0] = linha+1;
                    pos_jogador[1] = coluna+1;
                }
            }
        }



        while (pos_analogimon[0]!=pos_jogador[0])
        {
            segundos++;
            pos_jogador[0]+= (pos_analogimon[0]<pos_jogador[0]) ? -1 : 1;
        }

        while (pos_analogimon[1]!=pos_jogador[1])
        {
            segundos++;
            pos_jogador[1]+= (pos_analogimon[1]<pos_jogador[1]) ? -1 : 1;
        }

        printf("%d\n", segundos);
    }


    return 0;
}
