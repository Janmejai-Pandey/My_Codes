#include <stdio.h>

struct date
{
    int date;
    int month;
    int year;
} date1, date2;

int main()
{
    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.date, &date1.month, &date1.year);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.date, &date2.month, &date2.year);

    if (date1.year != date2.year)
    {
        printf("Unequal");
        return 0;
    }
    if (date1.month != date2.month)
    {
        printf("Unequal");
        return 0;
    }
    if (date1.date != date2.date)
    {
        printf("Unequal");
        return 0;
    }

    printf("Equal");
    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}