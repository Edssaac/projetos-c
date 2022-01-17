#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*registro que reprensentará cada elemento da pilha*/
struct Lista
{
	char nome[50];
	char brinquedo[50];
	struct Lista *prox;
};
typedef struct Lista Lista;

/*registro que reprensentará cada elemento da pilha*/
struct ListaCriancas
{
	char nome[50];
	struct ListaCriancas *prox;
};
typedef struct ListaCriancas ListaCriancas;



/*registro do tipo Fila contento dois ponteiros do tipo nó para controlar a fila*/
struct Fila
{
    struct Lista *inicio; /*aponta para o elemento do início da fila*/
    struct Lista *fim; /*aponta para o elemento do fim da fila*/
};
typedef struct Fila Fila;

/*registro do tipo FilaCriancas contento dois ponteiros do tipo nó para controlar a fila*/
struct FilaCriancas
{
    struct ListaCriancas *inicio; /*aponta para o elemento do início da fila*/
    struct ListaCriancas *fim; /*aponta para o elemento do fim da fila*/
};
typedef struct FilaCriancas FilaCriancas;



/*ponteiro auxiliar*/
Lista *aux;

/*ponteiro auxiliar*/
ListaCriancas *auxCriancas;



Fila *criaFila()
{
    /*alocação do ponteiro li para controlar a lista*/
    Fila *fi = (Fila*) malloc(sizeof(Fila));

    if(fi != NULL)
    {
        /*a fila inicia-se vazia, portanto inicio e fim são iguais a NULL*/
        fi->fim = NULL;
        fi->inicio = NULL;
    }

    return fi;
}

FilaCriancas *criaFilaCriancas()
{
    /*alocação do ponteiro li para controlar a lista*/
    FilaCriancas *fi = (FilaCriancas*) malloc(sizeof(FilaCriancas));

    if(fi != NULL)
    {
        /*a fila inicia-se vazia, portanto inicio e fim são iguais a NULL*/
        fi->fim = NULL;
        fi->inicio = NULL;
    }

    return fi;
}



void insereElemento(Fila *fi)
{
    while (1)
    {
        /*a cada inserção alocamos dinamicamente um espaço para um novo elemento*/
        Lista *novo =(Lista*) malloc(sizeof(Lista));

        scanf("%s", novo->nome);
        scanf("%s", novo->brinquedo);

        if ( strcmp(novo->nome, "--") == 0 )
            break;

        novo->prox = NULL;

        /*caso a fila esteja vazia, o elemento inserido será o primeiro e o último */
        if(fi->inicio == NULL)
        {
            fi->inicio = novo;
            fi->fim = novo;
            /*caso a pilha ja contenha algum elemento, o novo elemento será sempre inserido no fim da fila*/
        }
        else
        {
            fi->fim->prox = novo;
            fi->fim = novo;
        }
    }
}

void insereElementoCriancas(FilaCriancas *fi)
{
    while (1)
    {
        /*a cada inserção alocamos dinamicamente um espaço para um novo elemento*/
        ListaCriancas *novo =(ListaCriancas*) malloc(sizeof(ListaCriancas));

        if ( scanf("%s", novo->nome) == EOF )
            break;

//        if ( strcmp(novo->nome, "Elaine") == 0 ) break;

        novo->prox = NULL;

        /*caso a fila esteja vazia, o elemento inserido será o primeiro e o último */
        if(fi->inicio == NULL)
        {
            fi->inicio = novo;
            fi->fim = novo;
            /*caso a pilha ja contenha algum elemento, o novo elemento será sempre inserido no fim da fila*/
        }
        else
        {
            fi->fim->prox = novo;
            fi->fim = novo;
        }
    }
}



/*os elementos da fila serão mostrados do primeiro inserido(inicio) ao último (fim)*/
void consultaFila(FilaCriancas *fiCriancas, Fila *fi)
{
	if(fiCriancas->inicio != NULL)
    {
		auxCriancas = fiCriancas->inicio;
		do
		{
            if(fi->inicio != NULL)
            {
                aux = fi->inicio;
                do
                {
                    if ( strcmp( aux->nome, auxCriancas->nome) == 0 )
                    {
                        printf("Child: %s\n", aux->nome);
                        printf("Gift %s\n", aux->brinquedo);
                        break;
                    }
                    aux = aux->prox;
                } while(aux != NULL);
            }

            if (aux != NULL)
                printf("\n");
            else
                printf("404 not found\n\n");

			auxCriancas = auxCriancas->prox;
		} while(auxCriancas != NULL);
	}
}



int main(void)
{
    Fila *fi = criaFila();
    insereElemento(fi);

    FilaCriancas *fiCriancas = criaFilaCriancas();
    insereElementoCriancas(fiCriancas);

    consultaFila(fiCriancas, fi);

    return 0;
}
