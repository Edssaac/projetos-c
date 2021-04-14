#include <stdio.h>

int main() {

    long long int a;
    int b;
    long int c;


    scanf("%lld", &a);
    scanf("%d", &b);
    scanf("%ld", &c);

    printf("A = %lld, B = %d, C = %ld\n", a, b, c);
    printf("A = %10lld, B = %10d, C = %10ld\n", a, b, c);;
    printf("A = %010lld, B = %010d, C = %010ld\n", a, b, c);
    printf("A = %-10lld, B = %-10d, C = %-10ld\n", a, b, c);;


    return 0;
}
