#include <stdio.h>
#include <math.h>;

int main() {

    float A, B, C, X;

    scanf("%f %f %f", &A, &B, &C);

    if (A < B){ X = A; A = B; B = X; }
    if (B < C){ X = B; B = C; C = X; }
    if (A < B){ X = A; A = B; B = X; }

    if (A >= (B+C)) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ( pow(A,2) == pow(B,2)+pow(C,2) ) {
            printf("TRIANGULO RETANGULO\n");
        }
        if ( pow(A,2) > pow(B,2)+pow(C,2) ) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ( (A*A) < ((B*B)+(C*C)) ){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ( (A==B && A!=C ) || (A==C && A!=B ) || (C==B && A!=C ) ) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
