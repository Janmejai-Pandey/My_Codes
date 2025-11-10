#include<stdio.h>

void print(int n){
    if(n==0) return;
    print(n-1);
    printf("%d ", n);
}

int main(){
    int number = 50;
    printf("Printing numbers from 1 to %d:\n", number);
    print(number);
    printf("\n");
    return 0;
}