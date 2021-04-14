#include <stdio.h>

int main() {

    int a, b, c;


    scanf("%i %i %i", &a, &b, &c);

    if ( ( (b<a) && (c>=b) ) ||
         ( (b>a) && (c>b) && (c-b)>=(b-a) ) ||
         ( (b<a) && (c<b) && (b-c)<(a-b) ) ||
         ( (a==b) && (c>b) )
       )
    {
        printf(":)\n");
    }
    else
    {
        printf(":(\n");
    }

    return 0;
}
