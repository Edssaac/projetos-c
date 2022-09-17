#include <stdio.h>

typedef struct time {
    char nome[11];
    int pontos;
} Time;

int main(void) {

    int t, n, i, empates, pontos;

    while ( scanf("%d %d", &t, &n) ) {
        if (t == 0 && n == 0) {
            break;
        }

        Time times[t];
        empates = 0;
        pontos = 0;

        for (i=0; i<t; i++) {
            scanf("%s", times[i].nome);
            scanf("%d", &times[i].pontos);

            pontos += times[i].pontos;
        }

        if (pontos == (n*3)) {
            printf("0\n");
        } else {
            printf("%d\n", (n*3)-pontos);
        }
    }

    return 0;
}
