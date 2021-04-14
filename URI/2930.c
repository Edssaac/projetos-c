#include <stdio.h>

int main() {

    int dataEntregue, dataFinal;


    scanf("%d %d", &dataEntregue, &dataFinal);

    if ( dataEntregue>dataFinal )
        printf("Eu odeio a professora!\n");
    else if ( dataFinal-dataEntregue>=3 )
        printf("Muito bem! Apresenta antes do Natal!\n");
    else
    {
        printf("Parece o trabalho do meu filho!\n");
        printf( (dataEntregue+2 < 24)?"TCC Apresentado!\n":"Fail! Entao eh nataaaaal!\n" );
    }


    return 0;
}
