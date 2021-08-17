#include <stdio.h>

int main(void)
{
    int diax, mesx, diay, mesy;
    int dias[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int i, cont;
    scanf("%d %d", &diax, &mesx);
    scanf("%d %d", &diay, &mesy);

    if ( mesx==mesy )
        cont = (diay-diax);
    else
    {
        cont = dias[mesx-1]-diax;
        cont += diay;
        for ( i=mesx; i<mesy-1; i++ )
        {
            cont += dias[i];
        }
    }
    printf("%d\n", cont );

    return 0;
}
