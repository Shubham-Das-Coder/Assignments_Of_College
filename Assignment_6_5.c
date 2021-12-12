#include <stdio.h>

int main()
{
    int arr[10], flag = 0, i, search;
    printf("Enter ten numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search\n");
    scanf("%d", &search);
    for (i = 0; i < 10; i++)
    {
        if (search == arr[i])
        {
            printf("%d is found at %d", search, i + 1);
            flag++;
        }
    }   
    if (flag == 0)
    {
        printf("%d is not found", search);
    }
    return 0;
}