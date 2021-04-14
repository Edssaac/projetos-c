#include <stdio.h>
#include <string.h>

int main() {

    char john[1005], medico[1005];


    fgets(john, 1005, stdin);
    john[ strlen(john)-1 ] = '\0';

    fgets(medico, 1005, stdin);
    medico[ strlen(medico)-1 ] = '\0';

    printf( (strlen(john)>=strlen(medico)) ? "go\n" : "no\n" );

    return 0;
}

