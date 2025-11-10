#include<stdio.h>

int main(){
    int r1,i1;
    printf("Enter a real part of number 1 - ");
    scanf("%d",&r1);
    printf("Enter a imaginary part of number 1 - ");
    scanf("%d",&i1);

    int r2,i2;
    printf("Enter a real part of number 2 - ");
    scanf("%d",&r2);
    printf("Enter a imaginary part of number 2 - ");
    scanf("%d",&i2);

    int ans_re=r1+r2;
    int ans_im=i1+i2;
    printf("Sum of complex number - %d + %di",ans_re,ans_im);
    return 0;
}