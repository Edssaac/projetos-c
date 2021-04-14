#include <stdio.h>

int main() {

    int x, y, m, i;
    int x2, y2;

    while ( scanf("%d %d %d", &x, &y, &m) != EOF )
    {
        for ( i=0; i<m; i++ )
        {
            scanf("%d %d", &x2, &y2);

			if ( (x2 <= x && y2 <= y) || (x2 <= y && y2 <= x) )
				printf("Sim\n");
			else
				printf("Nao\n");
        }
    }


    return 0;
}
