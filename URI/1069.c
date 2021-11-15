#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, casos, diamantes;
    char linha[1001];

    scanf("%d", &casos);
    while (casos--)
    {
        scanf("%s", linha);
        diamantes=0;
        for ( i=0; i<strlen(linha); i++ )
        {
            if ( linha[i]=='\0' )
                break;
            if ( linha[i]=='<' )
            {
                for ( j=i; j<strlen(linha); j++ )
                {
                    if ( linha[j]=='>' )
                    {
                        diamantes++;
                        linha[j] = '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n", diamantes);
    }
    return 0;
}
