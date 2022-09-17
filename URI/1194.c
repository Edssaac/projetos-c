#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef struct nohArvore
{   char letra;
	struct nohArvore *direita;
	struct nohArvore *esquerda;
} nohArvore;

int pos;

nohArvore* novoNo(char letra)
{
	nohArvore *no = (nohArvore*) malloc(sizeof(nohArvore));
	no->letra = letra;
	no->esquerda = no->direita = NULL;

	return no;
}

int buscaLetra(char *str, int inicio, int fim, char letra)
{
	int i;
	for (i = inicio; i <= fim; ++i)
		if (str[i] == letra)
			return i;

	return -1;
}

nohArvore* arvore(char *infixa, char *prefixa, int inInicio, int inFim)
{
	int infixaIndice;

	if (inInicio > inFim)
		return NULL;

	nohArvore *no = novoNo(prefixa[pos++]);
	if (inInicio == inFim)
		return no;

	infixaIndice = buscaLetra(infixa, inInicio, inFim, no->letra);
	no->esquerda = arvore(infixa, prefixa, inInicio, infixaIndice - 1);
	no->direita = arvore(infixa, prefixa, infixaIndice + 1, inFim);

	return no;

}

void imprimirPosFixa(nohArvore *no)
{
	if (no == NULL)
		return;

	imprimirPosFixa(no->esquerda);
	imprimirPosFixa(no->direita);
	printf("%c", no->letra);

}


int main(void)
{
	int casos;
	int nohs, i;
	char prefixa[MAX], infixa[MAX];

	scanf("%d", &casos);
	while (casos--)
	{
		scanf("%d %s %s%*c", &nohs, prefixa, infixa);
		pos = 0;
		nohArvore *raiz = arvore(infixa, prefixa, 0, nohs-1);
		imprimirPosFixa(raiz);
		printf("\n");
	}

	return 0;
}

