#include <stdio.h>;

void ordem ( const void *, const void *);

struct aluno
{
    char nome[100];
    long int h;
};

int main(void)
{
    int N, T, i;
    scanf("%d %d", &N, &T);
    struct aluno alx[N];

    for ( i=0; i<N; i++ )
    {
        scanf("%s", alx[i].nome);
        scanf("%d", &alx[i].h);
    }


    return 0;

}

void ordem ( const void *a, const void *b )
{
    struct aluno *p1 = (struct aluno*)a;
    struct aluno *p2 = (struct aluno*)b;



}
