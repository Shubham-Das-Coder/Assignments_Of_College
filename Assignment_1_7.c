#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 0, d = 20;
    printf("a = %d , b = %d", a, b);
    printf("\nResult of a && b=%d", a && b);
    printf("\nResult of a || b=%d", a || b);
    printf("\nc = %d , d = %d", c, d);
    printf("\nResult of c && d= %d", c && d);
    printf("\nResult of a || b= %d", c || d);
    return 0;
}