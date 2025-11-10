#include<stdio.h>

int prime(int num){
    for (size_t i = 2; i*i <= num; i++)
    {
        if(num%i==0) return 0;
    }
    return 1; 
}

int main(){
    int num;
    printf("Enter a number - ");
    scanf("%d",&num);

    for (size_t i = 1; i <= num/2; i++)
    {
        if(prime(i) && prime(num-i)){
            printf("%d = %d + %d\n",num, i, num-i);
        }
    }
    return 0;
}