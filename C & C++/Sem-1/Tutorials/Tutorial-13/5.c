// Wrtie a C program to create a structure “telephone”: which is made up of a string
// (that is used to hold the name of the person) and an integer (that is used to hold the
// telephone number).

#include <stdio.h>
struct telephone
{
    char name[50];
    int number;
};

int main()
{
    int n;
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    struct telephone contacts[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for contact %d\n", i + 1);
        printf("Name: ");
        scanf("%s", contacts[i].name);
        printf("Telephone Number: ");
        scanf("%d", &contacts[i].number);
    }
    printf("\nContact Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Telephone Number: %d\n", contacts[i].name, contacts[i].number);
    }

    printf("Janmejai Pandey - 2501030199 -B4\n");
    return 0;
}