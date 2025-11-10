#include <stdio.h>

void printN(int num){
    for(int i = 1; i<=num; i++){
        printf("%d ",i);
    }
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
