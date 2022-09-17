#include <stdio.h>

int main()
{
    int x, y;
    int restos, resto;

    while( scanf("%d %d", &x, &y) ) {
        if (x==0 && y==0) {
            break;
        }

        restos=0;
        resto=0;

        while ( x > 0 || y > 0 ) {
            resto = ((x%10)+(y%10)+resto)/10;
            x /= 10;
            y /= 10;
            restos+=resto;
        }

        printf("%d\n", restos);
    }

    return 0;
}
