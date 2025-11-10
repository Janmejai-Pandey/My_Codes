#include<stdio.h>

void fibonacci(int n){
    int a=0;
    int b=1;
    int c=a+b;

    if(a<=n) printf("%d ",a);
    if(b<=n) printf("%d ",b);

    while (c<=n)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }   
}

int main(){
    int num;
    printf("Enter range - ");
    scanf("%d",&num);

    printf("Fibonacci Number till %d:\n",num);
    fibonacci(num);

    return 0;
}