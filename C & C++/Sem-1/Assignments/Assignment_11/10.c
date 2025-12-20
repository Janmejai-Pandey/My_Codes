#include<stdio.h>

union Some
{
    char str[10];
    int num;
    float decimal;
}u1,u2;

int main(){
    printf("Enter string for first union: ");
    scanf("%s", u1.str);
    printf("Enter integer for first union: ");
    scanf("%d", &u1.num);
    printf("Enter float for first union: ");
    scanf("%f", &u1.decimal);

    printf("\nValues in first union:\n");
    printf("String: %s\n", u1.str);
    printf("Integer: %d\n", u1.num);
    printf("Float: %.2f\n", u1.decimal);

    printf("\nEnter string for second union: ");
    scanf("%s", u2.str);
    printf("String in second union: %s\n", u2.str);

    printf("Enter integer for second union: ");
    scanf("%d", &u2.num);
    printf("Integer in second union: %d\n", u2.num);

    printf("Enter float for second union: ");
    scanf("%f", &u2.decimal);
    printf("Float in second union : %.2f\n", u2.decimal);

    // Print sizes
    printf("\nSize of first union : %ld bytes\n", sizeof(u1));
    printf("Size of second union : %ld bytes\n", sizeof(u2));

    printf("Janmejai Padney 2501030199 B4\n");
    return 0;
}
