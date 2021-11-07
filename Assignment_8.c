#include <stdio.h>
int main()
{
    int a = 50, b = 5;
    printf("Result of a & b = %d", a & b);
    printf("\nResult of a | b = %d", a | b);
    printf("\nResult of a ^ b = %d", a ^ b);
    printf("\nResult of ~a = %d", ~a);
    printf("\nResult of ~b = %d", ~b);
    printf("\nResult of a <<2 = %d", a << 2);
    printf("\nResult of b >> 2 = %d", b >> 2);
    return 0;
}