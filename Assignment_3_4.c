#include <stdio.h>
void main()
{
    int i, num, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers = %d", num, sum);
}