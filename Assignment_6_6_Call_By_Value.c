#include <stdio.h>
void disp(char ch)
{
    printf("%c  ", ch);
}
int main()
{
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    for (int i = 0; i < 7; i++)
    {
        disp(arr[i]);
    }
    return 0;
}