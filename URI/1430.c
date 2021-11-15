#include <stdio.h>
#include <string.h>

int main(void)
{
    char p[201];
    int i;

    while (1)
    {
        scanf("%s", p);
        if ( p[0] == '*' ) break;

        int composicao=0, x=0;
        float tempo=0;
        for ( i=1; i<strlen(p); i++ )
        {
            if ( p[i] == '/' )
            {
                composicao++;
                if ( tempo == 1 ) x++;
                tempo=0;
            }
            else
            {
                switch( p[i] )
                {   case 'W':
                        tempo += 1;
                        break;
                    case 'H':
                        tempo += 0.50;
                        break;
                    case 'Q':
                        tempo += 0.25;
                        break;
                    case 'E':
                        tempo += 0.125;
                        break;
                    case 'S':
                        tempo += 0.0625;
                        break;
                    case 'T':
                        tempo += 0.03125;
                        break;
                    case 'X':
                        tempo += 0.015625;
                        break;
                }
            }
        }
        printf("%d\n", x);
    }

    return 0;
}
