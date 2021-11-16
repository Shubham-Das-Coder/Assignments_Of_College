#include <stdio.h>
int main()
{
    float bill, tax;
    int tpercent;
    printf("Enter your electric bill\n");
    scanf("%f", &bill);
    if (bill < 800)
    {
        tpercent = 0;
    }
    else if (bill >= 800 && bill < 1200)
    {
        tpercent = 10;
    }
    else if (bill >= 1200 && bill < 2000)
    {
        tpercent = 15;
    }
    else
    {
        tpercent = 22;
    }
    tax = (bill * tpercent) / 100;
    bill = bill + tax;
    printf("Tax implied=%d", tpercent);
    printf("\nTax amount=%.2f", tax);
    printf("\nFinal bill amount=%.2f", bill);
    return 0;
}