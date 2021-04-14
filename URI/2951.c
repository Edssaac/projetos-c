#include <stdio.h>

int main()
{

    char r;
    int RunasExistentes, PoderNecessario, Poder, v, i;
    int run[200] = { 0 };

    scanf("%d %d%*c", &RunasExistentes, &PoderNecessario);

    while (RunasExistentes--)
        scanf("%c %d%*c", &r, &v), run[r] = v;

    Poder = 0;
    scanf("%d%*c", &v);

    while (v--)
        scanf("%c%*c", &r), Poder += run[r];

    printf("%d\n%s\n", Poder, Poder >= PoderNecessario ? "You shall pass!" : "My precioooous");

    return 0;

}
