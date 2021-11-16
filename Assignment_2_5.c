#include <stdio.h>
int main()
{
    float a;
    printf("Enter total marks of student\n");
    scanf("%f", &a);
    if (a >= 600)
    {
        printf("1st Division");
    }
    else if (a < 600 && a >= 450)
    {
        printf("2nd Division");
    }
    else if (a < 450 && a >= 300)
    {
        printf("3d Division");
    }
    else if (a < 300)
    {
        printf("Failed");
    }
}