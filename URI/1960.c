#include <stdio.h>

void umdigito(int a); //se for apenas um digito;
void doisdigitos(int b); //se forem dois digitos;
void tresdigitos(int c); //se forem tres digitos;

int main() {

    int pagina;

    while ( scanf("%d", &pagina) != EOF )
    {
        if (pagina < 10) { umdigito(pagina); }
        else if (pagina < 100) { doisdigitos(pagina); }
        else { tresdigitos(pagina); }

        printf("\n");
    }

    return 0;
}

void umdigito(int a)
{
    switch (a)
    {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
    }
}

void doisdigitos(int b)
{
    int d = b/10; //segundo digito;
    b = b - (d*10); //primeiro digito;

    switch (d)
    {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;
    }

    umdigito(b);
}

void tresdigitos(int c)
{
    int d = c/100; //terceiro digito;
    c = c - (d*100); //resto de dois digitos;

    switch (d)
    {
        case 1:
            printf("C");
            break;
        case 2:
            printf("CC");
            break;
        case 3:
            printf("CCC");
            break;
        case 4:
            printf("CD");
            break;
        case 5:
            printf("D");
            break;
        case 6:
            printf("DC");
            break;
        case 7:
            printf("DCC");
            break;
        case 8:
            printf("DCCC");
            break;
        case 9:
            printf("CM");
            break;
    }

    doisdigitos(c);
}
