#include<stdio.h>

int main(){
    int num1;
    printf("Enter 1st number- ");
    scanf("%d",&num1);
    
    int num2;
    printf("Enter 2nd number- ");
    scanf("%d",&num2);
    printf("\n");

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping- \n1st number- %d\n2nd number- %d",num1,num2);
    return 0;
}