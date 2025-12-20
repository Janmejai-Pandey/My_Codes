// Define a union which can record the ID, Name, Age, and Salary of two employees
// Employee. Using loops, record the input for five users and print all the records such that no
// data is lost while printing the output.

#include<stdio.h>

union employee
{
    int id;
    char name[50];
    int age;
    float salary;
};

int main(){
    union employee emp[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Records:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Salary: %.2f\n\n", emp[i].salary);
    }
    printf("Janmejai Pandey 25010301199 B4");
    return 0;
}