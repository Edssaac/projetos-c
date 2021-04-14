#include <stdio.h>

struct Dados{
	int Saque, Bloq, Atc;
	int SaqueOK, BloqOK, AtcOK;
};

int main(){
	short NumeroJogadores;
	char Nome[100];
	long tSaq, tBloq, tAtaq, tPSaq, tPBloq, tPAtaq;
	struct Dados jogador;

	tSaq = tBloq = tAtaq = tPSaq = tPBloq = tPAtaq = 0;

	scanf("%hd", &NumeroJogadores);

	while(NumeroJogadores--){
		scanf("%s %d %d %d", Nome, &jogador.Saque, &jogador.Bloq, &jogador.Atc);
		scanf("%d %d %d", &jogador.SaqueOK, &jogador.BloqOK, &jogador.AtcOK);

        tSaq += jogador.Saque;
        tBloq += jogador.Bloq;
        tAtaq += jogador.Atc;

        tPSaq += jogador.SaqueOK;
        tPBloq += jogador.BloqOK;
        tPAtaq += jogador.AtcOK;

	}

	printf("Pontos de Saque: %.2lf %%.\n", (tPSaq*100.)/tSaq);
	printf("Pontos de Bloqueio: %.2lf %%.\n", (tPBloq*100.)/tBloq);
	printf("Pontos de Ataque: %.2lf %%.\n", (tPAtaq*100.)/tAtaq);

	return 0;
}








/*
int main() {

    //Criando variaveis necessarias:
    int NumeroJogadores, anotacao;
    double Saque, Bloqueio, Ataque;
    double TotalSaque_OK, TotalSaque, TotalBloqueio_OK, TotalBloqueio, TotalAtaque_OK, TotalAtaque;

    //Inicializando as que precisam:
    TotalSaque_OK = TotalSaque = TotalBloqueio_OK = TotalBloqueio = TotalAtaque_OK = TotalAtaque = 0;

    //Struct de dados dos jogadores:
    struct dados {

        char nome[100];
        int saq, bloc, atc;
        int saq_ok, bloc_ok, atc_ok;

    };

    //Lendo o tamanho do array (quantidade de jogadores):
    scanf("%i", &NumeroJogadores);

    //Criando o array:
    struct dados jogador[NumeroJogadores];

    //Lendo os dados:
    for (anotacao=0; anotacao<NumeroJogadores; anotacao++) {

        fflush(stdin);
        gets(jogador[anotacao].nome);

        scanf("%d %d %d", &jogador[anotacao].saq,
                          &jogador[anotacao].bloc,
                          &jogador[anotacao].atc);

        scanf("%d %d %d", &jogador[anotacao].saq_ok,
                          &jogador[anotacao].bloc_ok,
                          &jogador[anotacao].atc_ok);

    }

    //Processando os dados:
    for (anotacao=0; anotacao<NumeroJogadores; anotacao++) {

        TotalSaque += jogador[anotacao].saq;
        TotalBloqueio += jogador[anotacao].bloc;
        TotalAtaque += jogador[anotacao].atc;
        TotalSaque_OK += jogador[anotacao].saq_ok;
        TotalBloqueio_OK += jogador[anotacao].bloc_ok;
        TotalAtaque_OK += jogador[anotacao].atc_ok;

    }

    //Processando as porcetagens:
    Saque = ( TotalSaque_OK / TotalSaque ) * 100.00;
    Bloqueio = ( TotalBloqueio_OK / TotalBloqueio ) * 100.00;
    Ataque = ( TotalAtaque_OK / TotalAtaque ) * 100.00;

    //Imprimindo a informação processada:
    printf("Pontos de Saque: %.2f %%.\n", Saque);
    printf("Pontos de Bloqueio: %.2f %%.\n", Bloqueio);
    printf("Pontos de Ataque: %.2f %%.\n", Ataque);

    return 0;
}
*/
