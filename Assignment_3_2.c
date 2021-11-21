#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
        printf("%d is even",num);
        break;
    case 1:
        printf("%d is odd",num);
        break;
    }
    return 0;
}