#include <stdio.h>

int main() {

    int Casos, Caso, Numero, Divisao, Soma;


    scanf("%i", &Casos);

    for (Caso=0; Caso<Casos; Caso++) {

        scanf("%i", &Numero);

        Soma = 0;
        for (Divisao=1; Divisao<=Numero; Divisao++) {

            if (Numero%Divisao==0) {
                Soma+=Divisao;
            }

        }

        ( Soma == (Numero+1) ) ? printf("%i eh primo\n", Numero) : printf("%i nao eh primo\n", Numero) ;
    }


    return 0;
}
