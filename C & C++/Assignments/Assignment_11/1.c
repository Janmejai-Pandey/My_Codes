#include<stdio.h>

struct length
{
    int feet;
    int inches;
}l1,l2;


int main(){
    int total_inches, total_feet;
    printf("Enter length 1 (feet inches): ");
    scanf("%d %d", &l1.feet, &l1.inches);

    printf("Enter length 2 (feet inches): ");
    scanf("%d %d", &l2.feet, &l2.inches);

    total_inches = l1.inches + l2.inches;
    total_feet = l1.feet + l2.feet + (total_inches / 12);
    total_inches = total_inches % 12;

    printf("Total Length: %d feet %d inches\n", total_feet, total_inches);
    printf("Janmejai Pandey 25010301199 B4");
    return 0;
}