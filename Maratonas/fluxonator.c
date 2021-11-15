#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    int i, N;
    char eletrons[1001], saida[1001];
    bool l1, l2, l3;


    scanf("%d", &N);
    while (N--)
    {
        //true = esquerda;
        //false = direita;
        l1 = l2 = l3 = true;

        scanf("%s", eletrons);
        for ( i=0; i<strlen(eletrons); i++ )
        {
            switch ( eletrons[i] )
            {
                case 'A':
                    if (l1)
                    {
                        saida[i] = 'D';
                        l1 = false;
                    }
                    else
                    {
                        if (l2)
                        {
                            saida[i] = 'D';
                            l2 = false;
                        }
                        else
                        {
                           saida[i] = 'E';
                           l2 = true;
                        }
                        l1 = true;
                    }
                    break;

                case 'B':
                    if (l2)
                    {
                        saida[i] = 'D';
                        l2 = false;
                    }
                    else
                    {
                        saida[i] = 'E';
                        l2 = true;
                    }
                    break;

                case 'C':
                    if (l3)
                    {
                        if (l2)
                        {
                            saida[i] = 'D';
                            l2 = false;
                        }
                        else
                        {
                           saida[i] = 'E';
                           l2 = true;
                        }
                        l3 = false;
                    }
                    else
                    {
                        saida[i] = 'E';
                        l3 = true;
                    }
                    break;
            }
        }

        saida[strlen(eletrons)] = '\0';
        printf("%s\n", saida);
        saida[0] = '\0';
    }

    return 0;
}
