#include<stdio.h>

int main(){
    int num;
    printf("Enter a number - ");
    scanf("%d",&num);

    if(num<100000000||num>999999999){
        printf("Wrong number entered. Number should be of 9 digits");
    }
    else{
        int use = num%10000;
        int sum=0;
        printf("Sum of digits = %d\n",use);
        while (use)
        {
            sum= sum+use%10;
            use/=10;
        }
        printf("Sum = %d",sum);
    }
    
    return 0;
}