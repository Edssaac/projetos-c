#include <stdio.h>
#include <string.h>

int main()
{
    int casaComprado, casaSobrando, trabComprado, trabSobrando, dias;
    char casa[10], trab[10];

    casaComprado = casaSobrando = trabComprado = trabSobrando = 0;


    scanf("%d", &dias);
    while(dias--)
    {
        scanf("%s %s", casa, trab);

        if ( strcmp(casa, "chuva") == 0 && casaSobrando == 0 )
        {
            casaComprado++;
            trabSobrando++;
        }
        else if ( strcmp(casa, "chuva") == 0&& casaSobrando > 0 )
        {
            trabSobrando++;
            casaSobrando--;
        }

         if ( strcmp(trab, "chuva") == 0 && trabSobrando == 0 )
        {
            trabComprado++;
            casaSobrando++;
        }
        else if ( strcmp(trab, "chuva") == 0 && trabSobrando > 0 )
        {
            casaSobrando++;
            trabSobrando--;
        }
    }

    printf("%d %d\n", casaComprado, trabComprado);

    return 0;
}
