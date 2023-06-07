#include<stdio.h>
#include<string.h>

struct emp{
    int id;
    char name[50];
    float salary;
};

struct emp employee[100];

void searchById(struct emp employee[], int size)
{
    char name[50];

    printf("Enter the name to be searched: ");
    scanf("%s", name);

    for(int i = 0; i < size; i++)
    {
        if(strcmp(name, employee[i].name) == 0)
        {
            printf("id: %d \n", employee[i].id);
            printf("Name: %s \n", employee[i].name);
            printf("Salary: %f \n", employee[i].salary);
            return;
        }
    }
    printf("No any record is found\n");
    
}

void maxSalary(struct emp employee[], int size)
{
    int index = 0;

    for(int i = 1; i < size; i++)
    {
        if(employee[index].salary < employee[i].salary)
        {
            index = i;
        }
    }

    printf("Id : %d\n", employee[index].id);
    printf("Name: %s\n", employee[index].name);
    printf("Salary: %f\n", employee[index].salary);
}

int main(void)
{
    int n;

    printf("Enter the number of employee's detail you want to enter: ");
    scanf("%d", &n);

    for(int i =0 ; i < n; i++)
    {
        printf("Enter the id of employee -> %d: ", i);
        scanf("%d", &employee[i].id);

        printf("Enter the name of employee -> %d: ", i);
        scanf("%s", &employee[i].name);

        printf("Enter the salary of employee -> %d: ", i);
        scanf("%f", &employee[i].salary);
    }
    for(int i =0 ; i < n; i++)
    {
        printf("Id of employee-> %d: \n", employee[i].id);
        printf("Name of employee-> %s: \n", employee[i].name);
        printf("Salary of employee-> %f: \n", employee[i].salary);
    }

    
    maxSalary(employee, n);

    return 0;
}

