#include<stdio.h>

int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    printf("Enter number of rows - ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for (int j = 0; j < fibo(i+1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}