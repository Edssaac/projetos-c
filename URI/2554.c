#include <stdio.h>
#include <string.h>

struct confirmacoes {
    int pessoa;
};

int main() {

    int pessoas, datas, confirmacao, i, j;
    char data[15], data_pizza[15];

    while ( scanf("%d", &pessoas) != EOF )
    {
        struct confirmacoes presenca[pessoas];
        scanf("%d", &datas);

        data_pizza[0] = '\0';
        for ( i=0; i<datas; i++ )
        {
            scanf("%s", data);
            for ( j=0; j<pessoas; j++ )
            {
                scanf("%d", &presenca[j].pessoa);
            }

            confirmacao = 0;
            for ( j=0; j<pessoas&&strlen(data_pizza)==0; j++ )
            {
                if (presenca[j].pessoa == 1) {
                    confirmacao++;
                }

                if (confirmacao==pessoas) { strcpy(data_pizza, data); }
            }
        }

        printf( strlen(data_pizza) != 0 ? "%s", data_pizza : "Pizza antes de FdI" );
        printf("\n");
    }







    return 0;
}
