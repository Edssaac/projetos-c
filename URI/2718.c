#include <stdio.h>
#include <string.h>

int main() {

    long long int num, casos;
    char bin[100];
    int aux, i, x, y, maior;

    scanf("%d", &casos);

    for ( i=0; i<casos; i++ )
    {
        x=y=maior=0;

        scanf("%lld", &num);
        bin[0] = '\0';

        for ( aux=0; num>=1; aux++ )
        {
            if ( num % 2 == 0 )
                bin[aux] = '0';
            else
                bin[aux] = '1';

            num = num / 2;
            x++;
        }

        setbuf(stdin, NULL);


        for ( aux=x-1; aux>=0; aux-- )
        {
            if ( bin[aux] == '1' )
            {
                y++;
            }

            if ( bin[aux] == '0' )
            {
                if (y > maior)
                    maior = y;

                y = 0;
            }
        }

        if (y > maior)
            maior = y;


        printf("%d\n", maior);
    }

    return 0;
}
