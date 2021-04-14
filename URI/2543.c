#include <stdio.h>

int main(){
    long int id,  vid = 0, cod, jog, quantidade_gameplays;

    while(scanf("%ld %ld", &quantidade_gameplays, &id) != EOF){
        vid = 0;
        while(quantidade_gameplays--){
            scanf("%ld %ld", &cod, &jog);
            if(cod == id && jog == 0){
                vid++;
            }
        }

        printf("%ld\n", vid);
    }

    return 0;
}
