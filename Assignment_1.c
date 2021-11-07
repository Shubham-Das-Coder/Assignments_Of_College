#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("\n%d + %d", num1, num2);
    printf(" = %d", (num1 + num2));
    printf("\n%d - %d", num1, num2);
    printf(" = %d", (num1 - num2));
    printf("\n%d X %d", num1, num2);
    printf(" = %d", (num1 * num2));
    printf("\n%d / %d", num1, num2);
    printf(" = %d", (num1 / num2));
    return 0;
}