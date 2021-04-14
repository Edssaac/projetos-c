#include <stdio.h>

int main() {

    int x, c, b;
    char nome[30], p;

    scanf("%d", &x);
    c=b=0;

    while ( x>0 )
    {
        scanf("%s %c", nome, &p);

        switch (p)
        {
        case 'F':
            b++;
            break;
        case 'M':
            c++;
            break;
        }

        x--;
    }
    printf("%d carrinhos\n%d bonecas\n", c, b);


    return 0;
}
