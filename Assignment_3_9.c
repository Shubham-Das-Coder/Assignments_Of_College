#include <stdio.h>
int main()
{
    int a, n, b = 0, t;
    printf("Please enter a number:");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        a = n % 10;
        b = b + (a * a * a);
        n = n / 10;
    }
    if (b == t)
    {
        printf("%d is an armstrong number", t);
    }
    else
    {
        printf("%d is not an armstrong number", t);
    }
    return 0;
}
