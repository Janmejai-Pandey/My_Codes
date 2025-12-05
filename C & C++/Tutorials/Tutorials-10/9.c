#include<stdio.h>

int decToOct(int n){
    if(n==0)
        return 0;
    else
        return (n%8 + 10*decToOct(n/8));
}

int main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        printf("Octal of %d is %d\n",i,decToOct(i));
    }
    return 0;
}