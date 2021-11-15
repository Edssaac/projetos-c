#include <stdio.h>
#include <math.h>

int main(void)
{
	long long int T, N;

	scanf("%lld", &T);
	while(T--)
    {
		scanf("%lld", &N);

		if( N%4 == 0 )
			printf("1\n");
		else if( N%4 == 1 )
			printf("7\n");
		else if( N%4 == 2 )
			printf("9\n");
        else
			printf("3\n");

        //printf(">>%d\n\n", N%4);
	}

    return 0;
}
