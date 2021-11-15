#include <stdio.h>
#define MAX 301

typedef struct
{
    char vetor[MAX];
    int topo;
} Pilha;

char operador[7] = {'+','-','*','/','^','(',')'};
int grau[7] = {1,1,2,2,3,0,4};

int grauOperador(char c)
{
	int i;
	for(i=0;i<7;i++)
		if(operador[i] == c)
			return grau[i];
}

int isOperador(char c)
{
	int i;
	for(i=0;i<7;i++)
		if(operador[i] == c)
			return 1;
	return 0;
}

void pilhaInicializar(Pilha *p)
{
	p->topo = NULL;
}

void pilhaIncluir(Pilha *p, char operador)
{
	p->vetor[++p->topo] = operador;
}

void pilhaExcluir(Pilha *p)
{
	p->topo--;
}

int main()
{
	int i, N;
	char expressao[MAX];
	Pilha p;

	scanf("%d", &N);
	while (N--)
    {
		pilhaInicializar(&p);
		scanf("%s", expressao);
		for (i=0;expressao[i] != '\0';i++)
		{
			if (!isOperador(expressao[i]))
				printf("%c", expressao[i]);
			else
            {
				if (p.topo == NULL)
					pilhaIncluir(&p, expressao[i]);
				else
                {
					if (expressao[i] == ')')
					{
						while(p.vetor[p.topo] != '(')
                        {
							printf("%c", p.vetor[p.topo]);
							pilhaExcluir(&p);
						}
						pilhaExcluir(&p);
					}
                    else
                    {
						while (grauOperador(p.vetor[p.topo]) >= grauOperador(expressao[i]))
						{
							if(expressao[i] == '(')
								break;
							printf("%c", p.vetor[p.topo]);
							pilhaExcluir(&p);
							if(p.topo == NULL)
								break;
						}
						pilhaIncluir(&p, expressao[i]);
					}
                }
            }
		}

		while (p.topo != NULL)
        {
			printf("%c", p.vetor[p.topo]);
			pilhaExcluir(&p);
		}
		printf("\n");
	}

	return 0;
}
