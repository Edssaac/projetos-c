#include <stdio.h>
#include <string.h>

int main(void)
{
    char plv[21];

    scanf("%s", plv);
    printf( (strlen(plv) < 10) ? "palavrinha\n" : "palavrao\n" );

    return 0;
}
