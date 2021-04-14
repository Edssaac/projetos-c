#include<stdio.h>
#include<string.h>

int main()
{
    int testes, letras, i;
    char palavra[10000];


    scanf("%d",&testes);
    for(i=1;i<=testes;i++){
        scanf("%s", palavra);
        letras=strlen(palavra);
        printf("%.2f\n",letras/100.0);
    }

    return 0;
}
