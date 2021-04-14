#include <stdio.h>
#include <string.h>

int main() {

	char a[25], b[25];


	scanf("%s %s", a, b);

	if (strcmp(a, b) > 0)
	{
		printf("%s\n", b);
		printf("%s\n", a);
	}
	else if (strcmp(a, b) < 0)
	{
		printf("%s\n", a);
		printf("%s\n", b);
	}


    return 0;
}
