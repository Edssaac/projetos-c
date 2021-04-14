#include <stdio.h>

int main() {

    int x, y, i, j;
    scanf("%d %d", &x, &y);
    int M[x][y];


    for ( i=0; i<x; i++ )
        for ( j=0; j<y; j++ )
            scanf("%d", &M[i][j]);



    if ( x<3 || y<3 )
        printf("0 0\n");

    else
    {
        for ( i=0; i<x; i++ )
            for ( j=0; j<y; j++ )
                if (M[i][j]==42)
                {

                    if ( (M[i][j-1]==7) && (M[i][j+1]==7) && (M[i-1][j]==7) && (M[i+1][j]==7) && (M[i-1][j-1]==7) && (M[i-1][j+1]==7) && (M[i+1][j-1]==7) && (M[i+1][j+1]==7) )
                    {
                        printf("%d %d\n", i+1, j+1);

                        return 0;
                    }

                }
    }

    printf("0 0\n");

    return 0;
}
