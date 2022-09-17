#include <stdio.h>
#include <stdlib.h>


typedef struct regNo
{   struct regNo *esq;
    int valor;
    struct regNo *dir;
} regNo;

regNo *buscaPrincipal(regNo *r, int v)
{
    if ( r == NULL )
		return NULL;

    if ( v <= r->valor )
        if ( r->esq == NULL )
            return r;
        else
            return buscaPrincipal(r->esq, v);
    else
        if ( r->dir == NULL )
            return r;
        else
            return buscaPrincipal(r->dir, v);
}

int imprimeArvore(regNo *r, int percurso)
{
	if(r == NULL)
        return 0;

    switch (percurso)
    {
        case 1:
			printf(" %d", r->valor);
			imprimeArvore(r->esq, 1);
			imprimeArvore(r->dir, 1);
        break;
        case 2:
			imprimeArvore(r->esq, 2);
			printf(" %d", r->valor);
			imprimeArvore(r->dir, 2);
        break;
        case 3:
			imprimeArvore(r->esq, 3);
			imprimeArvore(r->dir, 3);
			printf(" %d", r->valor);
        break;
    }
}

int main()
{
    regNo *raiz, *principal, *aux;
	int tam, casos, caso, d, noh;

	raiz = NULL;
	scanf("%d", &casos);
	for(caso=1; caso<=casos; caso++)
	{
		raiz = NULL;
		scanf("%d", &tam);
		for (d=0; d<tam; d++)
		{
			scanf("%d", &noh);

			aux = (regNo*) malloc(sizeof(regNo));
			aux->valor = noh;
			aux->esq = NULL;
			aux->dir = NULL;

			principal = buscaPrincipal(raiz, noh);
			if(principal == NULL)
				raiz = aux;
			else
				if(noh <= principal->valor)
					principal->esq = aux;
				else
					principal->dir = aux;
		}

		printf("Case %d:", caso);

		printf("\nPre.:");
		imprimeArvore(raiz, 1);

		printf("\nIn..:");
		imprimeArvore(raiz, 2);

		printf("\nPost:");
		imprimeArvore(raiz, 3);

		printf("\n\n");
	}

	return 0;
}
