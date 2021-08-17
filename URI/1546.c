#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, K, i;
    char nomes[4][10] = { "Rolien", "Naej", "Elehcim", "Odranoel" };


    scanf("%d", &N);
    while ( N-- )
    {
        scanf("%d", &K);
        while ( K-- )
        {
            scanf("%d", &i);
            printf("%s\n", nomes[i-1] );
        }
    }

    return 0;
}
