#include<stdio.h>

struct students
{
    long int roll_no;
    char name[50];
    int age;
    char address[100];
};


int main(){
    printf("Enter number of students: \n");
    int n;
    scanf("%d", &n);
    struct students s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%ld", &s[i].roll_no);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Address: ");
        scanf("%s", s[i].address);
    }

    printf("Students with age 14:\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].age == 14)
        {
            printf("%s\n", s[i].name);
        }
    }

    printf("Students with even roll numbers:\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].roll_no % 2 == 0)
        {
            printf("%s\n", s[i].name);
        }
    }

    long int search_roll_no;
    printf("Enter roll number to search: ");
    scanf("%ld", &search_roll_no);
    for (int i = 0; i < n; i++){
        if (s[i].roll_no == search_roll_no){
            printf("Details of student with roll no %ld:\n", search_roll_no);
            printf("Name: %s\n", s[i].name);
            printf("Age: %d\n", s[i].age);
            printf("Address: %s\n", s[i].address);
        }
    }
    printf("Janmejai Pandey 25010301199 B4");
    return 0;
}