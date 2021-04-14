#include <stdio.h>

int main() {

    char Letra, i;
    char alfabeto[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    scanf(" %c", &Letra);

    for ( i=0; i<26; i++ )
    {
        if ( Letra == alfabeto[i] )
        {
            printf("%d\n", i+1);
            break;
        }
    }


    return 0;
}
