#include <stdio.h>

typedef struct
{
    char serialNumber[4];
    int year;
    char material[50];
    int quantity;
} part;

int main()
{
    int n;
    printf("Enter number of parts: ");
    scanf("%d", &n);
    part parts[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Part %d:\n", i + 1);
        printf("Serial Number (e.g., AA0): ");
        scanf("%s", parts[i].serialNumber);
        printf("Year of Manufacture: ");
        scanf("%d", &parts[i].year);
        printf("Material: ");
        scanf(" %[^\n]s", parts[i].material);
        printf("Quantity Manufactured: ");
        scanf("%d", &parts[i].quantity);
    }

    printf("\nParts with Serial Numbers between BB1 and CC6:\n");
    for (int i = 0; i < n; i++)
    {
        if ((parts[i].serialNumber[0] == 'B' || parts[i].serialNumber[0] == 'C') && (parts[i].serialNumber[1] == 'B' || parts[i].serialNumber[1] == 'C') && (parts[i].serialNumber[2] >= '1' && ( parts[i].serialNumber[2] <= '6' && parts[i].serialNumber[0] == 'C' && parts[i].serialNumber[1] == 'C') || (parts[i].serialNumber[0] == 'B' && parts[i].serialNumber[1] == 'B')))
        {
            printf("Serial Number: %s, Year: %d, Material: %s, Quantity: %d\n", parts[i].serialNumber, parts[i].year, parts[i].material, parts[i].quantity);
        }
    }

    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}