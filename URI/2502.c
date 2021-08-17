#include <stdio.h>
#include <string.h>
#include <ctype.h>

int min(char c) {
    return (isupper(c)? 'a' + c  -'A'  : c);
}

int max(char c) {
    return (islower(c)? 'A' + c - 'a' : c);
}

int main() {

    int i, j, letras, palavras, cripto[1024];
	char antigo[50], novo[50], linha[1024];

	while (scanf("%d %d ", &letras, &palavras) != EOF) {

		for (i = 0; i < 1000; i++)
			cripto[i] = i;

		scanf("%[^\n]%*c", antigo);
		scanf("%[^\n]%*c", novo);

		for (i = 0 ; i < strlen(antigo); i++) {
			cripto[(int) antigo[i]] = max(novo[i]);
			if (isupper(antigo[i]))
				cripto['a' + antigo[i] - 'A'] = min(novo[i]);

			cripto[(int)novo[i]] = max(antigo[i]);
			if (isupper(novo[i]))
				cripto['a' + novo[i] - 'A'] = min(antigo[i]);
		}

		for (i = 0; i < palavras; i++) {
			scanf("%[^\n]%*c", linha);
			for (j = 0; j < strlen(linha); j++)
				printf("%c",(isupper(linha[j])? (char) max(cripto[(int) linha[j]]) : (char) min(cripto[(int) linha[j]])));
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}


//struct cifrado {
//
//    char frase[1050];
//
//};
//
//
//int main() {
//
//    int caracteres, linhas, linha, letra, i, x;
//
//
//    while ( scanf("%d", &caracteres) != EOF )
//    {
//        scanf("%d", &linhas);
//        char cifra_a[caracteres], cifra_b[caracteres];
//        struct cifrado texto[linhas];
//
//
//        //Lendo os codigos:
//        scanf("%s", cifra_a);
//        scanf("%s", cifra_b);
//
//        //deixando os codigos em minusculo:
//        for ( i=0; i<caracteres; i++ )
//        {
//            cifra_a[i] = tolower(cifra_a[i]);
//            cifra_b[i] = tolower(cifra_b[i]);
//        }
//
//        //Lendo as frases cifradas:
//        for ( linha=0; linha<linhas; linha++ )
//        {
//            setbuf(stdin, NULL);
//            fgets(texto[linha].frase, 150, stdin);
//        }
//
//
//        //Decrifrando:
//        for ( linha=0; linha<linhas; linha++ )
//        {
//            for ( letra=0; letra<strlen(texto[linha].frase); letra++ )
//            {   x=0;
//                if ( texto[linha].frase[letra] == toupper(texto[linha].frase[letra]) )
//                    x=1;
//
//                for ( i=0; i<caracteres; i++ )
//                {
//                    if ( isdigit(cifra_a[i]) || isdigit(cifra_b[i]) ) x=0;
//
//                    if ( tolower(texto[linha].frase[letra]) == cifra_a[i] )
//                    {
//                        texto[linha].frase[letra] = ( texto[linha].frase[letra] >= 'A' && texto[linha].frase[letra] <= 'Z' ) ? toupper(cifra_b[i]) : cifra_b[i] ;
//                    }
//
//                    else if ( tolower(texto[linha].frase[letra]) == cifra_b[i] )
//                    {
//                        texto[linha].frase[letra] = ( texto[linha].frase[letra] >= 'A' && texto[linha].frase[letra] <= 'Z' ) ? toupper(cifra_a[i]) : cifra_a[i] ;
//                    }
//
//                }
//
//                if (x==1&&letra==0)
//                {
//                    texto[linha].frase[letra] = toupper(texto[linha].frase[letra]);
//                }
//            }
//        }
//
//        for ( linha=0; linha<linhas; linha++ )
//        {
//            printf("%s", texto[linha].frase );
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
