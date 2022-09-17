#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct nohArvore
{
	struct nohArvore *esq;
	unsigned valor;
	struct nohArvore *dir;
} nohArvore;

bool flag;

nohArvore* adicionarElemento(nohArvore *raiz, int valor)
{
	if (!raiz)
	{
		raiz = (nohArvore *) malloc(sizeof(nohArvore));
		raiz->valor = valor;
		raiz->dir = raiz->esq = NULL;
	}
	else if (raiz->valor < valor)
		raiz->dir = adicionarElemento(raiz->dir, valor);
	else
		raiz->esq = adicionarElemento(raiz->esq, valor);

	return raiz;
}

bool pesquisa(nohArvore *raiz, int chave)
{
	bool right, left;

	if (!raiz)
		return false;

	if (raiz->valor == chave)
		return true;

	if (raiz->valor < chave)
		right = pesquisa(raiz->dir, chave);
	else
		left = pesquisa(raiz->esq, chave);
}

void infixa(nohArvore *raiz)
{
	if (raiz)
	{
		infixa(raiz->esq);
		if (!flag)
			printf(" %d", raiz->valor);
		else
			printf("%d", raiz->valor), flag = false;

		infixa(raiz->dir);
	}
}

void prefixa(nohArvore *raiz)
{
	if (raiz)
	{
		if (!flag)
			printf(" %d", raiz->valor);
		else
			printf("%d", raiz->valor), flag = false;

		prefixa(raiz->esq);
		prefixa(raiz->dir);
	}
}

void posfixa(nohArvore *raiz)
{
	if (raiz)
	{
		posfixa(raiz->esq);
		posfixa(raiz->dir);

		if (!flag)
			printf(" %d", raiz->valor);
		else
			printf("%d", raiz->valor), flag = false;
	}
}

nohArvore * procuraMin(nohArvore *raiz)
{
	if (!raiz)
		return NULL;
	else if (!raiz->esq)
		return raiz;
	else
		return procuraMin(raiz->esq);
}

nohArvore * procuraMax(nohArvore *raiz)
{
	if(!raiz)
		return NULL;
	else if (!raiz->dir)
		return raiz;
	else
		return procuraMax(raiz->dir);
}

nohArvore * excluirElemento(nohArvore *raiz, int x)
{
	nohArvore *tmp;
	if (!raiz)
		return NULL;
	else if (raiz->valor > x)
		raiz->esq = excluirElemento(raiz->esq, x);
	else if (raiz->valor < x)
		raiz->dir = excluirElemento(raiz->dir, x);
	else if (raiz->esq && raiz->dir)
	{
		tmp = procuraMax(raiz->esq);
		raiz->valor = tmp->valor;
		raiz->esq = excluirElemento(raiz->esq, raiz->valor);
	}
	else
	{
		tmp = raiz;
		if (!raiz->esq)
			raiz = raiz->dir;
		else if (!raiz->dir)
			raiz = raiz->esq;

		free(tmp);
	}

	return raiz;
}


int main(void)
{
	int num;
	char comando[10];
	nohArvore *raiz = NULL;

	while (scanf("%s%*c", comando) != EOF)
	{
		if (strcmp(comando, "I") == 0)
			scanf("%d%*c", &num), raiz = adicionarElemento(raiz, num);
		else if (strcmp(comando, "P") == 0)
		{
			scanf("%d%*c", &num);

			if (pesquisa(raiz, num))
				printf("%d existe\n", num);
			else
				printf("%d nao existe\n", num);
		}
		else if (strcmp(comando, "R") == 0)
			scanf("%d%*c", &num), raiz = excluirElemento(raiz, num);
		else
		{
			flag = true;
			if (strcmp(comando, "INFIXA") == 0)
				infixa(raiz), printf("\n");
			else if (strcmp(comando, "PREFIXA") == 0)
				prefixa(raiz), printf("\n");
			else if (strcmp(comando, "POSFIXA") == 0)
				posfixa(raiz), printf("\n");
		}
	}

    return 0;
}
