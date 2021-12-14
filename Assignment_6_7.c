#include <stdio.h>
int main()
{
    int i, arr1[10], arr2[10], sum[10];
    printf("Enter the ten values of the first array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the ten values of the second array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("The sum of arrays\n");
    for (i = 0; i < 10; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("sum[%d] = %d\n", i, sum[i]);
    }
    return 0;
}