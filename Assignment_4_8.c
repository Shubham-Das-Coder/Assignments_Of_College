#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, k;
    int p_height = 5;
    for (i = 1; i <= p_height; i++)
    {
        for (k = p_height - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
