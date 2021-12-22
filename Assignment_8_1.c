#include <stdio.h>

struct employees
{
    char employee_name[50];
    int employee_id;
    float salary;
    char phone_no[50];
    int pincode;
};

int main()
{
    int i;
    struct employees e[2];

    for (i = 0; i < 2; i++)
    {
        printf("Enter employee name, employee id, salary,phone number, pincode\n");
        scanf("%s%d%f%s%d", &e[i].employee_name, &e[i].employee_id, &e[i].salary, &e[i].phone_no, &e[i].pincode);
    }

    printf("The details of the employees are\n");
    for (i = 0; i < 2; i++)
    {
        printf("Employee name : %s\nEmployee id : %d\nSalary : %.2f\nPhone number : %s\nPincode : %d\n", e[i].employee_name, e[i].employee_id, e[i].salary, e[i].phone_no, e[i].pincode);
    }

    return 0;
}