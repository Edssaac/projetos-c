#include <stdio.h>
#include <string.h>

int main() {

    char coluna[15];
    char alfabeto[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, j, soma;


    while ( scanf(" %s", coluna) != EOF )
    {

        if ( strcmp(coluna,"XFD")>0 && strlen(coluna)==3 )
        {
          printf("Essa coluna nao existe Tobias!\n");
          continue;
        }

        soma=0;

        for ( i=0; i<strlen(coluna); i++ )
            for ( j=0; j<26; j++ )
                if ( coluna[i] ==alfabeto[j] )
                {
                    if (i==2) soma+=j+1+52;
                    else if (i==1) soma+=j+26;
                    else soma+=j+1;

                    continue;
                }



        printf("%d\n", soma);

    }


    return 0;
}
