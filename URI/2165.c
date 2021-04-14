#include <stdio.h>
#include <string.h>

int main() {

    char tweet[510];


    fgets(tweet, 510, stdin);

    tweet[ strlen(tweet) -1 ] = '\0';

    ( strlen(tweet) <= 140 ) ? printf("TWEET\n") : printf("MUTE\n") ;


    return 0;
}
