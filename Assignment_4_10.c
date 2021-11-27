#include <stdio.h>
int main(int argc, char const *argv[])
{
    char i, j;
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
