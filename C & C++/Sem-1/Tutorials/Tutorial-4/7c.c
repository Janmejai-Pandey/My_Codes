#include<stdio.h>

    int main(){
    int num;
    printf("Enter number - ");
    scanf("%d",&num);
    
    int fact=1;
    if(num<0){
        printf("Wrong Input");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact*=i;
        }
        printf("Factorial of %d is %d",num,fact);
    }
    
    return 0;
}