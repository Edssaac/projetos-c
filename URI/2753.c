#include <stdio.h>

int main() {

    int i, n=97;
    char alf[26] = "abcdefghijklmnopqrstuvwxyz";

    for ( i=0; i<26; i++ )
    {
        printf("%d e %c\n", n, alf[i]);

        n++;
    }


    return 0;
}
