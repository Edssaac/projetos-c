#include <stdio.h>

int main() {

    int L, i, j;
    char T;
    float M[12][12], Soma, Media;
    Soma = Media = 0;

    scanf("%i", &L);
    scanf(" %c", &T);

    for (i=0; i<12; i++) {
        for (j=0; j<12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    switch (T)
    {
        case 'S':
            for (j=0; j<12; j++) {
                Soma+= M[L][j];
            }
            printf("%.1f\n", Soma);
            break;

        case 'M':
            for (j=0; j<12; j++) {
                Soma+= M[L][j];
            }
            Media = Soma/12;
            printf("%.1f\n", Media);
            break;
    }

    return 0;
}
