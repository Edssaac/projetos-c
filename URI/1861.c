#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct
{	char nome[20];
	unsigned mortes;
} assassinos;

typedef struct arvoreAssassinos
{	struct arvoreAssassinos *esquerdo;
	assassinos valor;
	struct arvoreAssassinos *direito;
} arvoreAssassinos;

typedef struct arvoreMortos
{
	struct arvoreMortos *esquerdo;
	char morto[20];
	struct arvoreMortos *direito;
} arvoreMortos;


arvoreAssassinos* adicionarAssassino(arvoreAssassinos *hall, assassinos assassino)
{
	if (!hall)
	{
		hall = (arvoreAssassinos *) malloc(sizeof(arvoreAssassinos));
		hall->valor = assassino;
		hall->valor.mortes++;
		hall->esquerdo = hall->direito = NULL;
	}
	else if (strcmp(hall->valor.nome, assassino.nome) > 0)
		hall->esquerdo = adicionarAssassino(hall->esquerdo, assassino);
	else if (strcmp(hall->valor.nome, assassino.nome) < 0)
		hall->direito = adicionarAssassino(hall->direito, assassino);
	else
		hall->valor.mortes++;

	return hall;
}

arvoreMortos* adicionarMorto(arvoreMortos *mortos, char *morto)
{
	if (!mortos)
	{
		mortos = (arvoreMortos *) malloc(sizeof(arvoreMortos));
		strcpy(mortos->morto, morto);
		mortos->esquerdo = mortos->direito = NULL;
	}
	else if (strcmp(mortos->morto, morto) > 0)
		mortos->esquerdo = adicionarMorto(mortos->esquerdo, morto);
	else
		mortos->direito = adicionarMorto(mortos->direito, morto);

	return mortos;
}

bool pesquisa(arvoreMortos *mortos, char *chave)
{
	bool direita, esquerda;

	if (!mortos)
		return false;

	if (strcmp(mortos->morto, chave) == 0)
		return true;

	if (strcmp(mortos->morto, chave) > 0)
		esquerda = pesquisa(mortos->esquerdo, chave);
	else
		direita = pesquisa(mortos->direito, chave);
}

void exibir(arvoreAssassinos *hall, arvoreMortos *mortos)
{
	if (hall != NULL)
	{
		exibir(hall->esquerdo, mortos);
		if (!pesquisa(mortos, hall->valor.nome))
			printf("%s %u\n", hall->valor.nome, hall->valor.mortes);
		exibir(hall->direito, mortos);
	}
}


void main ()
{
	char matou[20], morreu[20];
	arvoreAssassinos *hall = NULL;
	arvoreMortos *mortos = NULL;

	while (scanf(" %s %s", matou, morreu) != EOF)
	{
		assassinos assassino = { 0 };
		strcpy(assassino.nome, matou);
		hall = adicionarAssassino(hall, assassino);
		mortos = adicionarMorto(mortos, morreu);
	}

	printf("HALL OF MURDERERS\n");
	exibir(hall, mortos);
}
