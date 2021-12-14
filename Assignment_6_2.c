#include <stdio.h>

int main()
{
    float avg = 0.0, sum = 0.0;
    int arr[10], i;
    printf("Enter ten numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / 10;
    printf("Average = %f", avg);
    return 0;
}