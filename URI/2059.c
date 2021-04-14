#include <stdio.h>

int main() {

    int player_one_choice, player_one_number, player_two_number, steal, accuse;
    int sum;


    scanf("%d %d %d %d %d", &player_one_choice,
                             &player_one_number,
                             &player_two_number,
                             &steal,
                             &accuse);

    sum = player_one_number+player_two_number;


    if(player_one_choice==1){
        if(steal==1 && accuse==0) printf("Jogador 1 ganha!\n");
        else if(steal==1 && accuse==1) printf("Jogador 2 ganha!\n");
        else if (sum%2==0) printf("Jogador 1 ganha!\n");
        else printf("Jogador 2 ganha!\n");
    }

    if(player_one_choice==0){
        if(steal==1 && accuse==0) printf("Jogador 1 ganha!\n");
        else if(steal==1 && accuse==1) printf("Jogador 2 ganha!\n");
        else if(sum%2==1) printf("Jogador 1 ganha!\n");
        else printf("Jogador 2 ganha!\n");
    }


    return 0;
}
