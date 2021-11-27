#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 5, y = 5;
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j < 5 * 2; j++)
        {
            if (j >= x && j <= y)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        x--;
        y++;
        printf("\n");
    }
    return 0;
}
