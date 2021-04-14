#include <stdio.h>
#include <string.h>

int main() {

    int jipes, pessoas, amount;
    char registro[7];

    jipes=pessoas=0;

    do
    {
        scanf("%s", registro);

        if ( strcmp(registro,"ABEND") != 0 ) scanf("%d", &amount);

        if ( strcmp(registro,"SALIDA") == 0 )
        {
            pessoas+=amount;
            jipes++;
        }
        else if ( strcmp(registro,"VUELTA") == 0 )
        {
            pessoas-=amount;
            jipes--;
        }


    } while ( strcmp(registro,"ABEND") != 0 );

    printf("%d\n%d\n", pessoas, jipes);


    return 0;
}
