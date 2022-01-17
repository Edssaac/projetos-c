#include <stdio.h>

struct Bota
{
    int tamanho;
    char pe;
};

int main(void)
{
    int Casos, i, j, pares;

    scanf("%d", &Casos);
    pares=0;

    struct Bota infos[Casos];
    for ( i=0; i<Casos; i++ )
    {
        scanf("%d %c", &infos[i].tamanho, &infos[i].pe);
    }

    for ( i=0; i<Casos; i++ )
    {
        for ( j=0; j<Casos; j++ )
        {
            if ( (i!=j) && infos[i].tamanho==infos[j].tamanho && infos[i].pe != infos[j].pe )
            {
                pares++;
                infos[i].tamanho = 0;
                infos[i].pe = 'X';
                infos[j].tamanho = 0;
                infos[j].pe = 'X';
                break;
            }
        }
    }

    printf("%d\n", pares);

    return 0;
}
