#include <stdio.h>

int main() {

    long long int competidores, nota, notaC, x=1;


    scanf("%lld", &competidores);

    scanf("%lld", &nota);
    notaC = nota;
    competidores--;

    while ( competidores>0 )
    {
        scanf("%lld", &nota);
        if ( notaC < nota ) x=0;

        competidores--;
    }

    printf( x==0?"N\n":"S\n" );

    return 0;
}



//int main() {
//
//    long long int x, competidores, i;
//    scanf("%lld", &competidores);
//    long long int notas[competidores];
//
//
//    for ( i=0; i<competidores; i++ )
//        scanf("%lld", &notas[i]);
//
//    for ( i=1; i<competidores; i++ )
//        if ( notas[0] < notas[i] )
//        { x=1; break; }
//
//    printf( x==1?"N\n":"S\n" );
//
//
//    return 0;
//}
