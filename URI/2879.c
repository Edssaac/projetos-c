#include <stdio.h>

int main() {

    int casos, caso, porta_premio, acertos;


    scanf("%d", &casos);
    acertos=0;

    for ( caso=0; caso<casos; caso++ )
    {
        scanf("%d", &porta_premio);
        if ( porta_premio!=1 ) acertos++;
    }

    printf("%d\n", acertos);


    return 0;
}
