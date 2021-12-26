#include <stdio.h>
struct student
{
    char name[50];
    int roll_no;
    char section;
};
void Display(struct student *a)
{
    printf("Student name : %s\nRoll number : %d\nSection : %c\n", a->name, a->roll_no, a->section);
}
int main()
{
    struct student a;
    printf("Enter student's name, roll number and section\n");
    scanf("%s%d%s", &a.name, &a.roll_no, &a.section);
    Display(&a);
    return 0;
}