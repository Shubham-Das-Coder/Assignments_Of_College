#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers to swap\n");
    scanf("%d%d", &a, &b);
    printf("\nBefore swap a=%d and b=%d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swap a=%d and b=%d", a, b);
    return 0;
}