#include <stdio.h>

int main() {

    int num;
    float numf;
    char letra;
    char palavra[55];


	scanf("%d %f %c %[^\n]", &num, &numf, &letra, palavra);

	printf("%d%f%c%s\n", num, numf, letra, palavra);
	printf("%d\t%f\t%c\t%s\n", num, numf, letra, palavra);
	printf("%10d%10f%10c%10s\n", num, numf, letra, palavra);

    return 0;
}
