#include <stdio.h>

int main() {

    float a, b, c, d, e, maior=0, menor=10, soma; //Criando as variáveis;

    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e); //Lendo as variáveis;
    soma = a+b+c+d+e; //Somando as notas;
    float notas[5] = {a, b, c, d, e}; //Passando as notas para uma lista, assim facilitando a comparação;

    for (int i=0; i < 5; i++) { //Fazendo um laço de repetição;

        if (notas[i] > maior) { //Encontrando o maior valor;
            maior = notas[i];
        }

        if (notas[i] < menor) { //Encontrando o menor valor;
            menor = notas[i];
        }
    }

    printf("%.1f", soma - (maior+menor)); //Impimindo o resultado com apenas uma casa após a vírgula;

    return 0;
}
