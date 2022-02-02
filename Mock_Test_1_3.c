#include <stdio.h>
int main()
{
    int n = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%3d", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}