#include <stdio.h>
#include <string.h>


int main() {

    char S[105];
    int i, verificador=0;


    scanf("%s", S);

    for ( i=0; i<strlen(S); i++ )
    {
        if ( S[i] == '1' ) { verificador++; }
    }

    (verificador%2==0) ? strcat(S, "0") : strcat(S, "1") ;

    printf("%s\n", S);

    return 0;
}
