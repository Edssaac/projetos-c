#include <stdio.h>

int main() {

    int testes, nota, horas, i, n, c;
    double ira;

    while ( scanf("%d", &testes) != EOF )
    {
        n=c=0;
        for ( i=0; i<testes; i++ )
        {
            scanf("%d %d", &nota, &horas);

            c+=horas;
            n+= nota*horas;
        }

        ira = n / (c*100.0);
        printf("%.4lf\n", ira);
    }


    return 0;
}
