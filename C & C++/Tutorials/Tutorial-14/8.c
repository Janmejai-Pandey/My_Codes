// There is a structure called employee that holds information like employee code,
// name, date of joining. Write a program to create an array of the structure and enter
// some data into it. Then ask the user to enter current date. Display the names of those
// employees whose tenure is 3 or more than 3 years according to the given current date.
#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} date;

typedef struct
{
    int empid;
    char empname[50];
    date doj;
} employee;

int calculateTenure(date doj, date current)
{
    int tenure = current.year - doj.year;
    if (current.month < doj.month || (current.month == doj.month && current.day < doj.day))
    {
        tenure--;
    }
    return tenure;
}

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    employee employees[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Emp ID: ");
        scanf("%d", &employees[i].empid);
        printf("Emp Name: ");
        scanf(" %[^\n]", employees[i].empname);
        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].doj.day, &employees[i].doj.month, &employees[i].doj.year);
    }

    date currentDate;
    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);

    printf("\nEmployees with tenure of 3 or more years:\n");
    for (int i = 0; i < n; i++)
    {
        int tenure = calculateTenure(employees[i].doj, currentDate);
        if (tenure >= 3)
        {
            printf("Emp Name: %s, Tenure: %d years\n", employees[i].empname, tenure);
        }
    }

    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}