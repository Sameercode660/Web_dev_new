#include<stdio.h>

struct emp{
    int empId;
    char name[20];
    float salary;
};

int main(void)
{
    struct emp employee;

    printf("Enter the empId: ");
    scanf("%d", &employee.empId);

    printf("Enter the employee name: ");
    gets(employee.name);

    printf("Enter the Salary of Employee : ");
    scanf("%f", &employee.salary);

    printf("empId -> %d\n", employee.empId);
    printf("Name -> %s\n", employee.name);
    printf("Salary ->%f\n", employee.salary);
    return 0;
}