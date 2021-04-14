#include <stdio.h>

struct lista {
    int cod, quant;
};

int main() {

    int Q, i;
    scanf("%d", &Q);
    struct lista item[Q];
    float consumo;


    for ( i=0; i<Q; i++ )
    {
        scanf("%d %d", &item[i].cod, &item[i].quant);
    }

    consumo = 0;
    for ( i=0; i<Q; i++ )
    {
        switch (item[i].cod)
        {
        case 1001:
            consumo+= item[i].quant * 1.50;
            break;
        case 1002:
            consumo+= item[i].quant * 2.50;
            break;
        case 1003:
            consumo+= item[i].quant * 3.50;
            break;
        case 1004:
            consumo+= item[i].quant * 4.50;
            break;
        case 1005:
            consumo+= item[i].quant * 5.50;
            break;
        }
    }

    printf("%.2lf\n", consumo);

    return 0;
}
