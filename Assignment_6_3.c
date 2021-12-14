#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], i, min, max;

    printf("Enter ten elements in array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    min = max = a[0];
    for (i = 1; i < 10; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("Minimum of array is : %d\n", min);
    printf("Maximum of array is : %d\n", max);
    return 0;
}