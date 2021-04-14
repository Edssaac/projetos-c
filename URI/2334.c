#include <stdio.h>

int main()
{
    unsigned long long int patos;


    while(scanf("%llu", &patos))
    {
        if(patos == -1ll) break;
        if(patos == 0ll) printf("0\n");
        else printf("%llu\n", patos - 1ll);
    }

    return 0;
}
