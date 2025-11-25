#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
}d1,d2;

int main(){
    printf("Enter date 1 (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    
    printf("Enter date 2 (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year){
        printf("Both dates are the same\n");
    }
    else{
        printf("Both dates are the different\n");
    }

    printf("Janmejai Padney 2501030199 B4\n");
    return 0;
}