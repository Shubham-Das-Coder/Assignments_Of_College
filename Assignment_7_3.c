#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter the string\n");
    scanf("%s", &str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    printf("Number of vowels in %s are %d", str, count);
    return 0;
}