#include <stdio.h>
void swap(char *a, char *b)
{
    char *temp;
    temp = b;
    b = a;
    a = temp;
    printf("After Swapping\nx = %s\ny = %s\n", a, b);
}
int main()
{
    char x[50], y[50];
    char *a, *b;
    a = x;
    b = y;

    printf("Enter two strings\n");
    gets(x);
    gets(y);

    printf("Before Swapping\nx = %s\ny = %s\n", x, y);

    swap(x, y);
    return 0;
}