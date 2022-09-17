#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char mensagem[201];
    char crypto[401];
    int i, j;

    scanf("%s", mensagem);
    scanf("%s", crypto);


    j=0;
    int tipo = 1;
    for(i=0; i<strlen(mensagem); i++) {

        if (mensagem[i] == 'w') {
            mensagem[i] = ' ';
            continue;
        }

        if (crypto[j] == '+') { //somar
            tipo = 1;
            j++;
        } else if (crypto[j] == '-') { //subtrair
            tipo = 2;
            j++;
        }

        if (tipo == 1) { //somar

            mensagem[i] = mensagem[i] + (crypto[j]-'0');
            j++;

            if ( (mensagem[i]) > 122 ) {
                mensagem[i] -= 26;
            }
            if ( (mensagem[i] * -1) > 122 ) {
                mensagem[i] -= 26;
            }


        } else if (tipo == 2) { //subtrair

            mensagem[i] = mensagem[i] - (crypto[j]-'0');
            j++;

            if ( mensagem[i] < 97 ) {
                mensagem[i] += 26;
            }
        }

    }


    printf("%s\n", mensagem);

    return 0;
}

