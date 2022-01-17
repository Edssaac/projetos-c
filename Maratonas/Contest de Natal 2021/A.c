//A - Categorizando Presentes
#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, p, conjunto[11];
    char presente[50];

    memset( conjunto, 0, sizeof(conjunto));

    scanf("%d", &N);
    while (N--)
    {
        scanf("%s %d", presente, &p);
        conjunto[p]++;
    }

    printf("Total de Brinquedos: %d\n", conjunto[1]);
    printf("Total de Alimentos: %d\n", conjunto[2]);
    printf("Total de Roupas: %d\n", conjunto[3]);
    printf("Total de Calcados: %d\n", conjunto[4]);
    printf("Total de Eletronicos: %d\n", conjunto[5]);
    printf("Total de Livros: %d\n", conjunto[6]);
    printf("Total de Gadgets: %d\n", conjunto[7]);
    printf("Total de Smartphones: %d\n", conjunto[8]);
    printf("Total de Jogos: %d\n", conjunto[9]);
    printf("Total de Papelaria: %d\n", conjunto[10]);

    return 0;
}
