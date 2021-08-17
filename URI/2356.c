#include <stdio.h>
#include <string.h>

int main(void)
{
	char D[101];
	char S[101];

    while ( scanf("%s", D) != EOF )
    {
        scanf("%s", S);

        if ( strstr(D, S)>0 )
            printf("Resistente\n");
        else
            printf("Nao resistente\n");
    }

    return 0;
}
