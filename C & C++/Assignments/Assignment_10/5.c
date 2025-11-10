#include<stdio.h>

int fibonacci(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int num;
    printf("Enter number of terms - ");
    scanf("%d",&num);

    printf("Fibonacci Series: ");
    for(int i = 1; i <= num; i++){
        printf("%d ", fibonacci(i));
    }    
    return 0;
}