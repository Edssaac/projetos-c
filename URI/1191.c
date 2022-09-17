#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000


typedef struct nohArvore
{	struct nohArvore *direita;
	char letra;
	struct nohArvore *esquerda;
} nohArvore;


int pos;

nohArvore* novoNoh(char letra)
{
	nohArvore *no = (nohArvore*) malloc(sizeof(nohArvore));
	no->letra = letra;
	no->esquerda = no->direita = NULL;

	return no;
}

int pesquisa(char *str, int inicio, int fim, char letra)
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

	nohArvore *no = novoNoh(prefixa[pos++]);
	if (inInicio == inFim)
		return no;

	infixaIndice = pesquisa(infixa, inInicio, inFim, no->letra);
	no->esquerda = arvore(infixa, prefixa, inInicio, infixaIndice - 1);
	no->direita = arvore(infixa, prefixa, infixaIndice + 1, inFim);

	return no;
}

void imprimirPosfixa(nohArvore *no)
{
	if (no == NULL)
		return;

	imprimirPosfixa(no->esquerda);
	imprimirPosfixa(no->direita);
	printf("%c", no->letra);
}


int main(void)
{
	char prefixa[MAX], infixa[MAX];

	while (scanf("%s %s", prefixa, infixa) != EOF)
	{
		int tam = strlen(prefixa);
		pos = 0;
		nohArvore *raiz = arvore(infixa, prefixa, 0, tam - 1);
		imprimirPosfixa(raiz);
		printf("\n");
	}

	return 0;
}
