#include <stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter the string\n");
    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    printf("Length of the string is %d", i);
    return 0;
}