#include <stdio.h>

int main() {

    int seres, hobbit, humano, elfo, anao, mago;
    char ser[20], esp;

    hobbit=humano=elfo=anao=mago=0;

    scanf("%d", &seres);
    while ( seres>0 )
    {
        scanf("%s %c", ser, &esp);

        switch (esp)
        {
            case 'A':
                anao++;
                break;
            case 'E':
                elfo++;
                break;
            case 'H':
                humano++;
                break;
            case 'M':
                mago++;
                break;
            case 'X':
                hobbit++;
                break;
        }

        seres--;
    }

    printf("%d Hobbit(s)\n", hobbit);
    printf("%d Humano(s)\n", humano);
    printf("%d Elfo(s)\n", elfo);
    printf("%d Anao(s)\n", anao);
    printf("%d Mago(s)\n", mago);


    return 0;
}
