#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
 char nome[50];
 char escolha[4];
} Fila;

int compara(const void *p1, const void *p2)
{
    Fila *i = (Fila*) p1, *j = (Fila*) p2;

    if(strcmp(j->escolha, i->escolha) == 0)
        return strcmp(i->nome, j->nome);
    else
        return strcmp(j->escolha, i->escolha);
}

int main()
{
    Fila candidatos[10000];
    char esc[50];
    int i, j, escolhido;

    i=0;
    while (1)
    {
        scanf("%s", candidatos[i].nome);

        if ( strcmp(candidatos[i].nome, "FIM")==0 )
            break;

        scanf("%s", candidatos[i].escolha);
        i++;
    }

    for ( j=escolhido=0; j<i; j++ )
    {
        if ( strcmp(candidatos[escolhido].escolha, "YES")==0 )
        {
          if ( !strcmp(candidatos[j+1].escolha, "YES") && strlen(candidatos[escolhido].nome) < strlen(candidatos[j+1].nome) )
                escolhido = j+1;
        }
        else
        {
             escolhido++;
             j++;
        }
    }

    strcpy(esc, candidatos[escolhido].nome);
    qsort(candidatos, i, sizeof(Fila), compara);
    printf("%s\n",candidatos[0].nome);

    for ( j=1; j<i; j++ )
        if ( strcmp(candidatos[j].nome, candidatos[j-1].nome) )
            printf("%s\n",candidatos[j].nome);

    printf("\nAmigo do Habay:\n%s\n", esc);

    return 0;
}

