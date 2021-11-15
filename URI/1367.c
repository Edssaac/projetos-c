#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool procuraQuestao(const char *questoes, char questao)
{
	while (*questoes)
		if (*(questoes++) == questao)
			return true;

	return false;
}

unsigned short procuraQuestaoPos(const char *questoes, char questao)
{
	unsigned short i = 0;
	while (questoes[i])
	{
		if (questoes[i] == questao)
			return i;
		i++;
	}
}

int main(void)
{
	unsigned short casos, i, tempoQuestao;
	unsigned short tempoTotal, questoresCorretas;
	char julgamento[15], questao;

	while (true)
	{
		scanf("%hu", &casos);
		if ( !casos )
			break;

		i = 0;
		questoresCorretas = 0;
		tempoTotal = 0;
		char questoes[casos];
		unsigned short qtsErros[casos];

		memset(qtsErros, 0, sizeof(qtsErros));
		memset(questoes, 0, sizeof(questoes));

		while (casos--)
		{
			scanf(" %c %hu %s", &questao, &tempoQuestao, julgamento);
			if (procuraQuestao(questoes, questao))
            {
				if (strcmp(julgamento, "correct") == 0)
				{
					questoresCorretas++;
					tempoTotal += tempoQuestao + qtsErros[procuraQuestaoPos(questoes, questao)];
				}
				else
				{
					qtsErros[procuraQuestaoPos(questoes, questao)] += 20;
				}
            }
			else
            {
				if (strcmp(julgamento, "correct") == 0)
				{
					questoresCorretas++;
					questoes[i] = questao;
					tempoTotal += tempoQuestao;
					i++;
				}
				else
				{
					questoes[i] = questao;
					qtsErros[i] += 20;
					i++;
				}
            }

			memset(julgamento, 0, sizeof(julgamento));
		}

		if (questoresCorretas == 0)
			printf("0 0\n");
		else
			printf("%hu %hu\n", questoresCorretas, tempoTotal);
	}

	return 0;
}

