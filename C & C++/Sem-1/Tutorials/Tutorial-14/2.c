#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} dob;

typedef struct
{
    char name[50];
    int rollNo;
    dob dateOfBirth;
    float totalMarks;
} student;

int main()
{
    student students[25];

    for (int i = 0; i < 25; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &students[i].dateOfBirth.day, &students[i].dateOfBirth.month, &students[i].dateOfBirth.year);

        printf("Total Marks: ");
        scanf("%f", &students[i].totalMarks);
    }

    printf("\nStudent Records:\n");
    for (int i = 0; i < 25; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Date of Birth: %2d/%2d/%4d\n", students[i].dateOfBirth.day, students[i].dateOfBirth.month, students[i].dateOfBirth.year);
        printf("Total Marks: %g\n\n", students[i].totalMarks);
    }

    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}