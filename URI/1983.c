#include <stdio.h>

struct dados {

    long long int aluno;
    double nota;

};

int main() {

    int alunos, i;
    scanf("%d", &alunos);
    struct dados matricula[alunos];
    long long int nota_max_id;
    double nota_max;
    nota_max = 0;


    for ( i=0; i<alunos; i++ )
    {
        scanf("%lld %lf", &matricula[i].aluno, &matricula[i].nota);

        if ( matricula[i].nota > nota_max )
        {
            nota_max = matricula[i].nota;
            nota_max_id = matricula[i].aluno;
        }

    }

    ( nota_max >= 8 ) ? printf("%lld\n", nota_max_id) : printf("Minimum note not reached\n") ;


    return 0;
}
