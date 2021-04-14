#include <stdio.h>

int main()
{
    long double numero;
    char s[120];


    scanf("%LE", &numero);
    sprintf(s,"%LE", numero);

    if(s[0] != '-')
    {
        printf("+");
    }

    printf("%.4LE\n", numero);


    return 0;
}
