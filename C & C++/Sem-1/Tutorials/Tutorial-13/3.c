// Write a C program to accept details of 'n' employee(eno, ename, salary) and display
// the details of employee having highest salary. Use array of structure.
#include <stdio.h>

struct Employee
{
    int eno;
    char ename[50];
    float salary;
};

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for employee %d\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee Name: ");
        scanf("%s", employees[i].ename);
        printf("Employee Salary: ");
        scanf("%f", &employees[i].salary);
    }

    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (employees[i].salary > employees[max].salary)
        {
            max = i;
        }
    }

    printf("\nEmployee with the highest salary:\n");
    printf("Employee Number: %d\n", employees[max].eno);
    printf("Employee Name: %s\n", employees[max].ename);
    printf("Employee Salary: %g\n", employees[max].salary);

    printf("Janmejai Pandey - 2501030199 -B4\n");
    return 0;
}