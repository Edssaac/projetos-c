#include <stdio.h>
#include <string.h>

int is_vogal(char*);

int main(void)
{
    char risada[51], aux[51], aux2[51];
    int c, i;


    scanf("%s", risada);

    for ( c=strlen(risada)-1, i=0; c>=0; c-- )
    {
        if ( is_vogal(risada[c]) )
        {
            aux[i++] = risada[c];
        }
    } aux[i]='\0';


    for ( c=0, i=0; c<=strlen(risada); c++ )
    {
        if ( is_vogal(risada[c]) )
        {
            aux2[i++] = risada[c];
        }
    } aux2[i]='\0';

    printf("%s\n", (strcmp(aux,aux2)==0) ? "S" : "N" );

    return 0;
}

int is_vogal(char *c)
{
    if ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
        return 1;

    return 0;
}

