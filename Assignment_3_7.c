#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Please enter a number greater than zero: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The Factorial Of %d Is %d", n, fact);
    return 0;
}
