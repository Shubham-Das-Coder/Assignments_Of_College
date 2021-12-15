#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str2[100];
    int i, len = 0;
    printf("Enter the string\n");
    scanf("%s", &str);
    printf("Enter another string\n");
    scanf("%s", &str2);
    len = strlen(str);
    printf("Length of the string is : %d\n", len);
    printf("Reverse of the string is : %s\n", strrev(str));
    printf("Copy of the string is : %s\n", strcpy(str, strrev(str)));
    printf("Comparing two strings str and str2 : %d\n", strcmp(str2, str));
    printf("Concatenating str and str2 : %s\n", strcat(str2, str));
    printf("Converting string to lower case : %s\n", strlwr(str));
    printf("Converting string to upper case : %s\n", strupr(str));
    return 0;
}