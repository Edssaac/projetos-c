#include <stdio.h>
#include <string.h>

int main() {

    char sinal[10];
    int num_loteria[2], num, i;
    num = i = 0;

    setbuf(stdin, NULL);
    while ( fgets(sinal, 10, stdin) != NULL ) {

        sinal[ strlen(sinal) - 1] = '\0';

        if ( strcmp(sinal, "caw caw") == 0 )
        {
            num_loteria[i] = num;
            num = 0;
            i++;
            if (i==3) {break;}
            continue;
        }
        else
        {
            if ( sinal[0] == '*' ) { num+=4; }
            if ( sinal[1] == '*' ) { num+=2; }
            if ( sinal[2] == '*' ) { num++; }
        }

    }

    for ( i=0; i<3; i++ ) {
        printf("%i\n", num_loteria[i]);
    }

    return 0;
}
