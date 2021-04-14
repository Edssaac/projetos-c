#include <stdio.h>
#include <string.h>

int main(){
    int alimentos, i, quantidade, vitamina;
    char alimento[30];

    scanf("%d",&alimentos);

    while(alimentos != 0){
        vitamina=0;
        for(i=0;i<alimentos;i++){
            scanf("%d",&quantidade);

            gets(alimento);

            if(strcmp(alimento," suco de laranja") == 0) vitamina+=quantidade*120;
            else if(strcmp(alimento," morango fresco") == 0) vitamina+=quantidade*85;
            else if(strcmp(alimento," mamao") == 0) vitamina+=quantidade*85;
            else if(strcmp(alimento," goiaba vermelha") == 0) vitamina+=quantidade*70;
            else if(strcmp(alimento," manga") == 0) vitamina+=quantidade*56;
            else if(strcmp(alimento," laranja") == 0) vitamina+=quantidade*50;
            else if(strcmp(alimento," brocolis") == 0) vitamina+=quantidade*34;
        }

        if(vitamina >= 110 && vitamina <= 130){
            printf("%d mg\n",vitamina);
        }
        else if(vitamina < 110){
            printf("Mais %d mg\n",110-vitamina);
        }
        else if(vitamina > 130){
            printf("Menos %d mg\n",vitamina-130);
        }

        scanf("%d",&alimentos);
    }

    return 0;
}
