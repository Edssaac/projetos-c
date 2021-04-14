#include <stdio.h>
#include <string.h>

int main() {

    char a[105], b[105], c[105];
    int i;

    setbuf(stdin, NULL);

    fgets(a, 105, stdin);
    fgets(b, 105, stdin);
    fgets(c, 105, stdin);

    a[ strlen(a)-1 ] = '\0';
    b[ strlen(b)-1 ] = '\0';
    c[ strlen(c)-1 ] = '\0';

    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);

    for ( i=0; i<10&&i<strlen(a); i++ )
        printf("%c", a[i]);
    for ( i=0; i<10&&i<strlen(b); i++ )
        printf("%c", b[i]);
    for ( i=0; i<10&&i<strlen(c); i++ )
        printf("%c", c[i]);

    printf("\n");


    return 0;
}
