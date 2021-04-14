#include <stdio.h>

int main() {

    int N, ato;
    char pos;


    scanf("%d", &N);
    scanf(" %c", &pos);

    while (N>0)
    {
        scanf("%d", &ato);

        switch (ato)
        {
        case 1:
            if (pos=='A') pos='B';
            else if (pos=='B') pos='A';

            break;

        case 2:
            if (pos=='B') pos='C';
            else if (pos=='C') pos='B';

            break;

        case 3:
            if (pos=='A') pos='C';
            else if (pos=='C') pos='A';

            break;
        }

        N--;
    }

    printf("%c\n", pos);


    return 0;
}
