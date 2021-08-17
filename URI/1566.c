#include <stdio.h>

int altura[3000001];

int main(void)
{
	int NC, N;
	int i, j, x;
	int *temp;


	scanf("%d", &NC);
	while(NC--)
    {
	 	scanf("%d", &N);
		memset( temp, 0, sizeof(temp) );

		for( i=0; i<N; i++ )
        {
		 	scanf("%d", &x);
			temp[x-20]++;
		}

		for( i=0, j=0; i<=210 && j<N; i++ )
			while( temp[i]-- )
				altura[j++] = i+20;

		for( i=0; i<N-1; i++ )
            printf("%d ", altura[i]);
		printf("%d\n", altura[N-1]);
	}

	return 0;
}
