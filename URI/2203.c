#include <stdio.h>
#include <math.h>

int main() {

    int x_fiddle, y_fiddle, x_invasor, y_invasor, velocidade, raio_ult, raio_corvos;
    int raio_acao;
    float dab; // distancia entre a e b;


    while ( scanf("%d", &x_fiddle) != EOF )
    {
        //lendo dados;
        scanf("%d %d %d %d %d %d", &y_fiddle, &x_invasor, &y_invasor, &velocidade, &raio_ult, &raio_corvos);

        //distancia entre fiddle e invasor:
        dab = sqrt( pow((x_invasor-x_fiddle), 2) + pow((y_invasor - y_fiddle), 2) );

        //distancia + metros percorridos pelo invasor:
        dab+= velocidade*1.5;

        //raio do ataque:
        raio_acao = raio_corvos+raio_ult;

        //o ataque alcança?
        printf((dab > raio_acao) ? "N\n" : "Y\n");
    }


    return 0;
}
