#include <stdio.h>
int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    if (grade == 'A')
    {
        printf("Excellent");
    }
    if (grade == 'B')
    {
        printf("Well done");
    }
    if (grade == 'C')
    {
        printf("Well done");
    }
    if (grade == 'D')
    {
        printf("You passed");
    }
    if (grade == 'E')
    {
        printf("Better try again");
    }
    return 0;
}