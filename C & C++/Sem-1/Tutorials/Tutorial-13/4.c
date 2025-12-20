// Write a C program to create one Structure student (with members as name, rollno,
// and percentage) and declare it inside union. Then accept values for structure members
// and display them.
#include <stdio.h>
union student
{
    struct stu
    {
        char name[50];
        int rollno;
        float percentage;
    }stu1;
};

int main()
{
    union student s;

    printf("Enter student name: ");
    scanf("%s", s.stu1.name);
    printf("Enter roll number: ");
    scanf("%d", &s.stu1.rollno);
    printf("Enter percentage: ");
    scanf("%f", &s.stu1.percentage);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.stu1.name);
    printf("Roll Number: %d\n", s.stu1.rollno);
    printf("Percentage: %g\n", s.stu1.percentage);

    printf("Janmejai Pandey - 2501030199 -B4\n");
    return 0;
}