#include <stdio.h>

int main() {

    int altura_pulo, numero_canos, cano_atual, cano_seguinte, distancia;


    scanf("%d %d", &altura_pulo, &numero_canos);

    scanf("%d", &cano_atual);
    numero_canos -= 1;
    while (numero_canos > 0)
    {
        scanf("%d", &cano_seguinte);

        distancia = (cano_atual>cano_seguinte) ? cano_atual-cano_seguinte : cano_seguinte-cano_atual ;

        if ( distancia > altura_pulo )
        {
           printf("GAME OVER\n");
           return 0;
        }

        cano_atual = cano_seguinte;
        numero_canos--;
    }

    printf("YOU WIN\n");

    return 0;
}
