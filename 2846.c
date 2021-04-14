#include <stdio.h>

int main()
{
    int N;
    const long MAX = 100100;
    long long fibonacci[MAX];
    long long _fibonot[MAX];

    int i, j, k;
    fibonacci[0] = 0; fibonacci[1] = 1;

    for (i = 2; i <= MAX; ++i)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    scanf("%d", &N);

    for (i = 1, j = 2, k = 1; i <= MAX; ++i)
    {
        if (fibonacci[j] != i)
        {
            _fibonot[k++] = i;
        }
        else
        {
            ++j;
        }
    }

    printf("%lld\n", _fibonot[N]);


    return 0;
}
