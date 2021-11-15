#include <stdio.h>
#include <string.h>

int main(void)
{
    char linha[1001];
    int i, esq, dir;

    while ( scanf("%s", linha) != EOF )
    {
        esq = 0;
        dir = 0;

        for( i=0; i<strlen(linha); i++ )
        {
             if( linha[i]=='(' )
                esq++;
             else if ( linha[i]==')' )
             {
                  dir++;
                  if(esq > 0)
                  {
                         esq--;
                         dir--;
                  }
             }
       }

       if(esq == 0 && dir == 0) printf("correct\n");
       else printf("incorrect\n");
    }
    return 0;
}
