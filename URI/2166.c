#include <stdio.h>

int main()
{
    double N, resp = 0.0;


    scanf("%lf", &N);
    while(N--)
    {
        resp+=2.0;
        resp = 1.0/resp;
    }

    resp += 1.0;
    printf("%.10lf\n", resp);

    return 0;
}

