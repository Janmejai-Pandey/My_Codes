#include<stdio.h>

int add(int a, int b){
    return a+b;
}
int substract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}

int main(){
    int num1;
    printf("Enter 1st number - ");
    scanf("%d",&num1);

    int num2;
    printf("Enter 2nd number - ");
    scanf("%d",&num2);

    printf("Enter a operation to perform - \n");
    printf("1 - Addition\n");
    printf("2 - Substraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");

    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Addition of %d and %d is %d.",num1,num2,add(num1,num2));
        break;

    case 2:
        printf("Substraction of %d and %d is %d.",num1,num2,substract(num1,num2));
        break;

    case 3:
        printf("Multiplication of %d and %d is %d.",num1,num2,multiply(num1,num2));
        break;

    case 4:
        printf("Division of %d and %d is %d.",num1,num2,divide(num1,num2));
        break;
    
    default:
        printf("Wrong Choice.");
        break;
    }
    return 0;
}