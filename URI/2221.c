#include <stdio.h>

struct registros {

    int ataque, defesa, xp;
};

int main() {

    int batalhas, batalha, bonus;
    float golpe_dabriel, golpe_guarte;
    scanf("%d", &batalhas);
    struct registros dabriel[batalhas];
    struct registros guarte[batalhas];


    for ( batalha=0; batalha<batalhas; batalha++ )
    {
        scanf("%d", &bonus);

        scanf("%d %d %d", &dabriel[batalha].ataque, &dabriel[batalha].defesa, &dabriel[batalha].xp);
        scanf("%d %d %d", &guarte[batalha].ataque, &guarte[batalha].defesa, &guarte[batalha].xp);

        golpe_dabriel = ((dabriel[batalha].ataque+dabriel[batalha].defesa)/2.0);
        golpe_guarte = ((guarte[batalha].ataque+guarte[batalha].defesa)/2.0);

        if (dabriel[batalha].xp%2==0) { golpe_dabriel+=bonus; }
        if (guarte[batalha].xp%2==0) { golpe_guarte+=bonus; }

        if (golpe_dabriel==golpe_guarte)
        {
            printf("Empate\n");
        }
        else if (golpe_dabriel>golpe_guarte)
        {
            printf("Dabriel\n");
        }
        else
        {
            printf("Guarte\n");
        }
    }


    return 0;
}
