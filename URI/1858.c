#include <stdio.h>

int main() {

    int N, T, x, y, i;


    scanf("%i", &N);

    x = 20;
    //Pegando a posição do menor numero:
    for (i=1; i<=N; i++)
    {
        scanf("%i", &T);

        if (T < x)
        {
            x = T;
            y = i;
        }

    }

    printf("%i\n", y);

    return 0;
}
