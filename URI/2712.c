#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct sinal {
    char placa[102];
    int vermelho;
};

int main() {

    long int casos, caso, i;


    scanf("%ld", &casos);
    struct sinal q[casos];

    for ( caso=0; caso<casos; caso++ )
    {
        scanf("%s", q[caso].placa);

        if ( strlen(q[caso].placa) != 8 || q[caso].placa[3] != '-' )
        {
            q[caso].vermelho = 1;
            continue;
        }

        for ( i=0; i<3; i++ )
            if ( q[caso].placa[i] == tolower(q[caso].placa[i]) )
            {
                q[caso].vermelho = 1;
                break;
            }

        for ( i=4; i<8; i++ )
            if ( isalpha(q[caso].placa[i]) )
            {
                q[caso].vermelho = 1;
                break;
            }
    }

    for ( caso=0; caso<casos; caso++ )
    {
        if ( q[caso].vermelho == 1 )
        {
            printf("FAILURE\n");
            continue;
        }

        if ( q[caso].placa[7] == '1' || q[caso].placa[7] == '2' ) printf("MONDAY\n");
        else if ( q[caso].placa[7] == '3' || q[caso].placa[7] == '4' ) printf("TUESDAY\n");
        else if ( q[caso].placa[7] == '5' || q[caso].placa[7] == '6' ) printf("WEDNESDAY\n");
        else if ( q[caso].placa[7] == '7' || q[caso].placa[7] == '8' ) printf("THURSDAY\n");
        else if ( q[caso].placa[7] == '9' || q[caso].placa[7] == '0' ) printf("FRIDAY\n");
    }


    return 0;
}

