#include <stdio.h>
int main()
{
    float tm,om;
    float percent;
    printf("Enter marks obtained\n");
    scanf("%f",&om);
    printf("Enter total marks\n");
    scanf("%f",&tm);
    percent=(om/tm)*100;
    printf("The percentage is %.2f",percent);
    return 0;
}