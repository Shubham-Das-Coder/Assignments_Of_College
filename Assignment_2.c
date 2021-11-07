#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c,f;
    printf("Please Enter The Temperature In Celsius\n");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Temperature In Fahrenheit Is %f",f);
    return 0;
}
