#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,temp;
    printf("Please Enter The Value Of First And Second Number\n");
    scanf("%d%d",&x,&y);
    printf("Before Swapping x = %d And y = %d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("After Swapping x = %d And y = %d",x,y);
    return 0;
}
