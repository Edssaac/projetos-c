#include <stdio.h>

int main()
{
    int N, i, padrao = 1;
    scanf("%d", &N);
    int H[N];


    for(i=0; i<N; i++)
    {
        scanf("%d", &H[i]);
    }

    if(N==2 && H[0]==H[1])
    {
        padrao = 0;
    }
    else
    {
        for(i=2; i<N; i++)
        {
            if(H[i] >= H[i-1] && H[i-1] >= H[i-2])
            {
                padrao = 0;
                break;
            }
            else if(H[i] <= H[i-1] && H[i-1] <= H[i-2])
            {
                padrao = 0;
                break;
            }
        }
    }

    printf((padrao==1)?"1\n":"0\n");


    return 0;
}
