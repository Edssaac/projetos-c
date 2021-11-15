#include <stdio.h>

int main(void)
{
    int alunos, jantares, aluno, jantar;

    while (1)
    {
        scanf("%d %d", &alunos, &jantares);
        if ( (alunos==0) && (jantares==0) )
            break;

        int registro[jantares][alunos];
        //Recebendo os dados:
        for ( aluno=0; aluno<jantares; aluno++ )
            for ( jantar=0; jantar<alunos; jantar++ )
                scanf("%d", &registro[aluno][jantar]);


        int diasJantados, esteveJantares=0;
        //Analisando as presenças:

        //Linhas:
        for ( aluno=0; aluno<jantares; aluno++ )
        {
            diasJantados=0;
            for ( jantar=0; jantar<alunos; jantar++ )
            {
                if ( registro[aluno][jantar]==1 )
                    diasJantados++;
            }

            if ( diasJantados == jantares )
            {
                esteveJantares = 1;
                break;
            }
        }

        //Colunas:
        for ( aluno=0; aluno<alunos && esteveJantares!=1; aluno++ )
        {
            diasJantados=0;
            for ( jantar=0; jantar<jantares; jantar++ )
            {
                if ( registro[jantar][aluno]==1 )
                    diasJantados++;
            }
            if ( diasJantados == jantares )
            {
                esteveJantares = 1;
                break;
            }
        }

        //Dando o resultado:
        if ( esteveJantares==1 )
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
