#include<stdio.h>

    int main(){
    int num;
    printf("Enter number - ");
    scanf("%d",&num);

    int sum=0;
    int temp = num;
    while (num>0)
    {
        sum+=num%10;
        num/=10;
    }
    printf("Sum of digits of  %d = %d", temp, sum);

    printf("\n\nJanmejai Pandey JEG254252 B4");    
    return 0;
}