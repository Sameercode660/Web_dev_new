#include<stdio.h>
#include<stdlib.h>

union employees{
    int id;
    char *name;
    float salary;
};

int main(void)
{
    union employees employee1;

    employee1.name = (char *)malloc(sizeof(char)*30);
    printf("%d", sizeof(employee1));

    employee1.name = "Mohd Sameer";

    printf("\nName is : %s", employee1.name);
    printf("\n%d", sizeof(employee1.name));
    return 0;
}