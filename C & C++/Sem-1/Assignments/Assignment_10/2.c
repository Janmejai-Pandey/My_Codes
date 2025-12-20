#include<stdio.h>

int max(int *a, int *b){
    return (*a > *b) ? *a : *b;
}
int main(){
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int maximum = max(&num1, &num2);
    printf("The maximum value is: %d\n", maximum);
    return 0;
}