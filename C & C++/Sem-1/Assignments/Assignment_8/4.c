#include<stdio.h>

int main(){
    int num;
    int *ptr = &num;
    printf("Enter number - ");
    scanf("%d", ptr);

    for (int i = 2; i * i <= *ptr; i++)
    {
        if (*ptr % i == 0)
        {
            printf("%d is not a prime number", *ptr);
            return 0;
        }
    }
    printf("%d is a prime number", *ptr);
    printf("\nJanmejai Pandey 2501030199 B4 \n");
    return 0;
}