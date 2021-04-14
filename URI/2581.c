#include <stdio.h>
#include <string.h>

int main() {

    char question[300];
    int amount;


    scanf("%d", &amount);
    while ( amount > 0 )
    {
        setbuf(stdin, NULL);
        fgets(question, 300, stdin);

        printf("I am Toorg!\n");

        amount--;
    }


    return 0;
}
