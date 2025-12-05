#include <stdio.h>

typedef struct
{
    char name[50];
    int telephoneNumber;
}telephone;

int main()
{
    telephone person;
    telephone *ptr = &person;

    int n;
    printf("Enter number of entries: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Entry %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]s", ptr->name);

        printf("Enter telephone number: ");
        scanf("%d", &ptr->telephoneNumber);
    }

    printf("Entries:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Telephone Number: %d\n", ptr->name, ptr->telephoneNumber);
    }

    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}