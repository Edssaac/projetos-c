#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef struct
{
    int vetor[MAX];
    int topo;
} Pilha;

void pilhaIncluir (Pilha *p, int id)
{
	p->vetor[++p->topo] = id;
}

void pilhaExcluir (Pilha *p)
{
	p->topo--;
}

int main()
{
	int vagao, trem, i, saida, entrada, vazio;
	Pilha p;

	while(1)
    {
        scanf("%d", &trem);
        if (trem == 0)
            break;

		while(1)
        {
			p.topo = -1;
			for(i=0, entrada=1, saida=0, vazio=0; i<trem && !saida && !vazio; i++)
			{
				scanf("%d", &vagao);
				if( vagao==0 )
				{
					vazio=1;
					break;
				}

				while(1)
                {
					if( vagao==entrada )
					{
						entrada++;
						break;
					}
                    else
					{
						if ( vagao>entrada )
						{
							pilhaIncluir(&p, entrada);
							entrada++;
						}
                        else
						{
							if( p.vetor[p.topo]==vagao )
								pilhaExcluir(&p);
							else
                            {
								saida=1;
								for( ; i<trem-1; i++ )
									scanf("%d", &vagao);
							}

							break;
						}
					}
				}
			}

			if( !vazio )
            {
				if( !saida )
					printf("Yes\n");
				else
					printf("No\n");
            }
			else
				break;
		}

		printf("\n");
	}

	return 0;
}

