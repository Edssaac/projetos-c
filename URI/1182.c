#include <stdio.h>

int main() {

    int C, i, j;
    char T;
    float M[12][12], Soma, Media;
    Soma = Media = 0;


    scanf("%i", &C);
    scanf(" %c", &T);

    for (i=0; i<12; i++) {
        for (j=0; j<12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    switch (T)
    {
        case 'S':
            for (i=0; i<12; i++) {
                Soma+=M[i][C];

            }
            printf("%.1f\n", Soma);
            break;

        case 'M':
            for (i=0; i<12; i++) {
                Soma+=M[i][C];
            }
            Media = Soma/12;
            printf("%.1f\n", Media);
            break;
    }


    return 0;
}
