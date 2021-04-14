#include <stdio.h>

int main() {

    int F, Fatorial, i;


    scanf("%i", &F);
    Fatorial = F;

    for (i=F; i>1; i--) {
        Fatorial *= (i-1) ;
    }

    printf("%i\n", Fatorial);

    return 0;
}
