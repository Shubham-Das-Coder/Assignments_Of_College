#include <stdio.h>

void main()
{
    int cnt = 0, i, j, num;
    printf("Enter the number of elements : ");
    scanf("%d", &num);
    int arr[num];

    printf("Enter the elements one by one\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
                printf("%d\n", arr[i]);
            }
        }
    }
    printf("Number of duplicate elements = %d", cnt);
}