//F - Validador de CPF do Noel
#include <stdio.h>
#include <string.h>
#include <math.h>

int validarCPF( char *cpf )
{
    if ( strlen(cpf) !=12 )
        return 0;

    int i, resto, total=0;

    for ( i=0; i<9; i++ )
    {
       total += ( (cpf[i]-'0') * (i+1) );
    }
    resto = ((total%11)==10) ? 0 : (total%11);

    if ( resto != (cpf[10]-'0') )
        return 0;

    total=0;
    for ( i=0; i<9; i++ )
    {
       total += ( (cpf[i]-'0') * (i) );
    }
    total += (resto*9);
    resto = ((total%11)==10) ? 0 : (total%11);

    if ( resto != (cpf[11]-'0') )
        return 0;

    return 1;
}

int main(void)
{
    int N;
    char cpf[13];

    scanf("%d", &N);
    while (N--)
    {
        scanf("%s", cpf);
        printf( ( (validarCPF(cpf)) ? "HoHoHoHo!\n" : "Muahahaha!\n" ) );
    }

    return 0;
}
