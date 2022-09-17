#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100


typedef struct regNoh
{	char letra;
	struct regNoh *esquerda;
	struct regNoh *direita;
} regNoh;

int i = 0;
int j = 0;
int k = 0;

regNoh* adicionarElemento(regNoh *noh, char letra)
{
	if (!noh)
	{
		noh = (regNoh *) malloc(sizeof(regNoh));
		noh->letra = letra;
		noh->direita = noh->esquerda = NULL;
	}
	else if (noh->letra > letra)
		noh->esquerda = adicionarElemento(noh->esquerda, letra);
	else
		noh->direita = adicionarElemento(noh->direita, letra);

	return noh;
}

bool procura(regNoh *noh, char letra)
{
	bool direita, esquerda;

	if (!noh)
		return false;

	if (noh->letra == letra)
		return true;

	if (noh->letra > letra)
		esquerda = procura(noh->esquerda, letra);
	else
		direita = procura(noh->direita, letra);
}

char Infixa[MAX]  = {0};
char Posfixa[MAX] = {0};
char Prefixa[MAX] = {0};

void imprimeInfixa(char *letras)
{
	int z;
	for (z = 0; z < i; ++z)
		if (!z)
			printf("%c", Infixa[z]);
		else
			printf(" %c", Infixa[z]);

	i = 0;
	printf("\n");
}

void imprimePrefixa(char *letras)
{
	int z;
	for (z = 0; z < k; ++z)
		if (!z)
			printf("%c", Prefixa[z]);
		else
			printf(" %c", Prefixa[z]);

	k = 0;
	printf("\n");
}

void imprimePosfixa(char *letras)
{
	int z;
	for (z = 0; z < j; ++z)
		if (!z)
			printf("%c", Posfixa[z]);
		else
			printf(" %c", Posfixa[z]);

	j = 0;
	printf("\n");
}

void infixa(regNoh *noh)
{
	if (noh)
	{
		infixa(noh->esquerda);
		Infixa[i++] = noh->letra;
		infixa(noh->direita);
	}
}

void posfixa(regNoh *noh)
{
	if (noh)
	{
		posfixa(noh->esquerda);
		posfixa(noh->direita);
		Posfixa[j++] = noh->letra;
	}
}

void prefixa(regNoh *noh)
{
	if (noh)
	{
		Prefixa[k++] = noh->letra;
		prefixa(noh->esquerda);
		prefixa(noh->direita);
	}
}


void main ()
{
	char comando[20], letra;

	regNoh *noh = NULL;
	while (scanf("%s%*c", comando) != EOF)
	{
		if (strcmp(comando, "I") == 0)
		{
			scanf("%c", &letra);
			noh = adicionarElemento(noh, letra);
		}
		else if (strcmp(comando, "INFIXA") == 0)
			infixa(noh), imprimeInfixa(Infixa);
		else if (strcmp(comando, "PREFIXA") == 0)
			prefixa(noh), imprimePrefixa(Prefixa);
		else if (strcmp(comando, "P") == 0)
		{
			scanf("%c", &letra);
			if (procura(noh, letra))
				printf("%c existe\n", letra);
			else
				printf("%c nao existe\n", letra);
		}
		else
			posfixa(noh), imprimePosfixa(Posfixa);
	}
}
