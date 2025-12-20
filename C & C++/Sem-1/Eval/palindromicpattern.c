#include<stdio.h>

int main(){
    int num;
    printf("Enter number - ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j+i-1);
        }
        for (int j = i -1; j >=1; j--)
        {
            printf("%d",j+i-1);
        }
        printf("\n");
    }
    
    return 0;
}