#include <stdio.h>

typedef struct
{
    int empid;
    char empname[50];
    float salary;
} employee;

void read(employee *emp, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Emp ID: ");
        scanf("%d", &emp[i].empid);
        printf("Emp Name: ");
        scanf(" %[^\n]s", emp[i].empname);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void search(employee *emp, int n, int id)
{
    for (int i = 0; i < n; i++)
    {
        if (emp[i].empid == id)
        {
            printf("Employee Found:\n");
            printf("Emp ID: %d\n", emp[i].empid);
            printf("Emp Name: %s\n", emp[i].empname);
            printf("Salary: %.2f\n", emp[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

void displayAll(employee *emp, int n)
{
    printf("\nAll Employee Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Emp ID: %d\n", emp[i].empid);
        printf("Emp Name: %s\n", emp[i].empname);
        printf("Salary: %.2f\n\n", emp[i].salary);
    }
}

void displayHighSalary(employee *emp, int n)
{
    printf("\nEmployees with Salary > 10000:\n");
    for (int i = 0; i < n; i++)
    {
        if (emp[i].salary > 10000)
        {
            printf("Emp Name: %s\n", emp[i].empname);
        }
    }
}

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    employee emp[n];
    read(emp, n);

    int choice, id;
    do
    {
        printf("\nMenu:\n");
        printf("1. Search by Emp-ID\n");
        printf("2. Display All Employees\n");
        printf("3. Display Names of Employees with Salary > 10000\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Emp-ID to search: ");
                scanf("%d", &id);
                search(emp, n, id);
                break;
            case 2:
                displayAll(emp, n);
                break;
            case 3:
                displayHighSalary(emp, n);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}