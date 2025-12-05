#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee employees[1000];

    int ids[1000];
    char names[1000][50];
    float salaries[1000];

    for (int i = 0; i < 1000; i++)
    {
        employees[i].id = i + 1;
        snprintf(employees[i].name, sizeof(employees[i].name), "Employee%d", i + 1);
        employees[i].salary = (i + 1) * 1000.0f;
    }

    for (int i = 0; i < 1000; i++)
    {
        ids[i] = i + 1;
        snprintf(names[i], sizeof(names[i]), "Employee%d", i + 1);
        salaries[i] = (i + 1) * 1000.0f;
    }

    int maxIndexStruct = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (employees[i].salary > employees[maxIndexStruct].salary)
        {
            maxIndexStruct = i;
        }
    }

    int maxIndexArray = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (salaries[i] > salaries[maxIndexArray])
        {
            maxIndexArray = i;
        }
    }

    printf("Using Structure Array:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n", employees[maxIndexStruct].id, employees[maxIndexStruct].name, employees[maxIndexStruct].salary);

    printf("Using Separate Arrays:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n", ids[maxIndexArray], names[maxIndexArray], salaries[maxIndexArray]);

    printf("Janmejai Pandey - 2501030199 -B4\n");
    return 0;
}
