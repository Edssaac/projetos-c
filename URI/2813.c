#include <stdio.h>
#include <string.h>

int main() {

    int dias, C, E, casa, escritorio;
    char SD[7], SN[7];
    C=E=casa=escritorio=0;

    scanf("%d", &dias);

    while (dias>0)
    {
        scanf("%s %s", SD, SN);

        if ( strcmp(SD,"chuva")==0 && casa==0 )
        {
            C++;
            escritorio=1;
        }
        else if ( strcmp(SD,"chuva")==0 && casa>0 )
        {
            casa--;
            escritorio++;
        }


        if ( strcmp(SN,"chuva")==0 && escritorio==0 )
        {
            E++;
            casa++;
        }
        else if ( strcmp(SN,"chuva")==0 && escritorio>0 )
        {
            casa++;
            escritorio--;
        }

        dias--;
    }

    printf("%d %d\n", C, E);


    return 0;
}
