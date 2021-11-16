#include <stdio.h>
int main()
{
    int gd, sale;
    float ccent;
    printf("Enter sales amount and grade\n");
    scanf("%d%d", &sale, &gd);
    if (sale >= 12000 && gd > 5)
    { 
        ccent = 23.5;
    }
    else if (sale >= 12000 && gd == 4)
    {
        ccent = 23;
    }
    else if (sale < 12000 && gd > 5)
    {
        ccent = 22.4;
    }
    else
    {
        ccent = 21.8;
    }
    printf("Commission=%.2f %%", ccent);
    printf("\nCommission amount=Rs. %.2f", (ccent * sale) / 100);
    return 0;
}