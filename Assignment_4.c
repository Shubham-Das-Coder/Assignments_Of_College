#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.14, area, circumference;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("\nArea of circle is: %f", area);
    circumference = 2 * pi * radius;
    printf("\nCircumference of circle is: %f", circumference);
    return (0);
}