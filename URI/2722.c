#include <stdio.h>
#include <string.h>

int main(void)
{
	char nome[100], sobrenome[100], nomeOriginal[300];
	unsigned short casos, i, j, k;
	unsigned contador, aux;

	scanf("%hu", &casos);
	while (casos--)
	{
		scanf(" %[^\n]", nome);
		scanf(" %[^\n]", sobrenome);

		contador = i = j = k = 0;
		aux = strlen(sobrenome);

		while (aux--)
		{
			while (nome[i])
			{
				nomeOriginal[k++] = nome[i++];
				contador++;

				if (contador == 2)
					break;
			}

			contador = 0;
			while (sobrenome[j])
			{
				nomeOriginal[k++] = sobrenome[j++];
				contador++;

				if (contador == 2)
					break;
			}

			contador = 0;
		}

		nomeOriginal[k] = '\0';
		printf("%s\n", nomeOriginal);
	}

	return 0;
}
