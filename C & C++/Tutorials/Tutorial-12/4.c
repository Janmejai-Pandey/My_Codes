#include<stdio.h>

void printEven(int a, int b){
    if(a > b){
        return;
    }
    if(a % 2 == 1){
        a++;
    }
    printf("%d ", a);
    printEven(a + 2, b);
}

void printOdd(int a, int b){
    if(a > b){
        return;
    }
    if(a % 2 == 0){
        a++;
    }
    printf("%d ", a);
    printOdd(a + 2, b);
}

int main(){
    int a,b;
    printf("Enter lower and upper limit - ");
    scanf("%d %d", &a, &b);

    printf("Even numbers between %d and %d are - \n", a, b);
    printEven(a, b);

    printf("\nOdd numbers between %d and %d are - \n", a, b);
    printOdd(a, b);

    printf("\nJanmejai Pandey - 2501030199 - B4\n");
    return 0;
}