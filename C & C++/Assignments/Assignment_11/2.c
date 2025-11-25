#include<stdio.h>

struct marks
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    int total_marks;
    double percentage;
}m[5];


int main(){
    for (int  i = 0; i < 5; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", m[i].name);
        printf("Roll No: ");
        scanf("%d", &m[i].roll_no);
        printf("Chemistry Marks: ");
        scanf("%d", &m[i].chem_marks);
        printf("Mathematics Marks: ");
        scanf("%d", &m[i].maths_marks);
        printf("Physics Marks: ");
        scanf("%d", &m[i].phy_marks);

        m[i].total_marks = m[i].chem_marks + m[i].maths_marks + m[i].phy_marks;
        m[i].percentage = (m[i].total_marks / 3.0);

        printf("Total Marks: %d\n", m[i].total_marks);
        printf("Percentage: %.2f%%\n\n", m[i].percentage);
    }

    printf("Janmejai Pandey 2501030199 B4");
    return 0;
}