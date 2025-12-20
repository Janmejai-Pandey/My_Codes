// Q9. Create a structure to store details of employees in an organization. The details should
// include
// employee id, salary, date of birth and date of joining. Date should be another structure with
// three integers data members for day, month and year. Define a function named increment
// to increase the salary of those employees who have more than 5 years of experience in this
// organization by 15% and others by 10%. Display the updated salary and years of
// experience. You may define other utility functions as needed. Store the details of given 5
// employees.
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
    float salary;
    date dob;
    date doj;
} employee;

int exp(date doj, date current)
{
    int experience = current.year - doj.year;
    if (current.month < doj.month || (current.month == doj.month && current.day < doj.day))
    {
        experience--;
    }
    return experience;
}

void incrementSalary(employee *emp, int n, date current)
{
    for (int i = 0; i < n; i++)
    {
        int experience = exp(emp[i].doj, current);
        if (experience > 5)
        {
            emp[i].salary *= 1.15;
        }
        else
        {
            emp[i].salary *= 1.10;
        }
        printf("Employee ID: %d, Updated Salary: %gf, Years of Experience: %d\n", emp[i].empid, emp[i].salary, experience);
    }
}

int main()
{
    int n = 5;
    employee employees[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Emp ID: ");
        scanf("%d", &employees[i].empid);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].dob.day, &employees[i].dob.month, &employees[i].dob.year);
        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].doj.day, &employees[i].doj.month, &employees[i].doj.year);
    }

    date currentDate;
    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);

    printf("\nUpdated Employee Salaries:\n");
    incrementSalary(employees, n, currentDate);

    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}