#include <stdio.h>
#include <string.h>

int main()
{
    char numero[25], temp;
    scanf("%s", numero);
    int tam = strlen(numero);
    int i, j;


    for(i=0, j=tam-1; i < tam/2; i++, j--)
    {
        temp = numero[i];
        numero[i]=numero[j];
        numero[j]=temp;
    }

    printf("%s\n", numero);

    return 0;
}


//int main() {
//
//    long long int numero, divisor, div, x;
//    int resto, i, y;
//
//
//    scanf("%lld", &numero);
//
//    divisor = 10;
//    div = 1;
//    x = 1;
//    y = 0;
//
//    while (1)
//    {
//        if (numero >= x)
//        {
//            x*=10;
//            y++;
//        }
//        else{
//            break;
//        }
//    }
//
//    for ( i=0; i<y; i++ )
//    {
//        resto = numero % divisor;
//        resto = resto / div;
//
//        divisor*=10;
//        div*=10;
//
//        printf("%d", resto);
//    }
//
//    printf("\n");
//
//    return 0;
//}
