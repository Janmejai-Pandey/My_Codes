#include<stdio.h>

    int main(){
    int num;
    printf("Enter number - ");
    scanf("%d",&num);

    //8 spaces 1 star   i=1  2(n-i)spaces 1star
    //6 spaces 1 star 1 space 1 star
    //4 spaces 1 star 3 space 1 star
    //2 spaces 1 star 5 space 1 star

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= 2*(num - i); j++)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 1; j < 2*(i-1); j++)
        {
            if(i==num){
                printf("*");
                continue;
            }
            printf(" ");
        }
        if(i!=1) printf("*");
        
        printf("\n");
    }
    
    return 0;
}