#include <stdio.h>

int convertOctal(int num){
    int octal=0;
    while(num>0){
        octal=octal*10+num%8;
        num/=8;
    }
    return octal;
}

int main()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);


    printf("Number till %d are ",num);
    printN(num);

    printf("\nJanmejai Pandey 2501030199 B4 \n");
    return 0;
}
