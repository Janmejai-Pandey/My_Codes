#include<stdio.h>

int main(){
    int num;
    printf("Enter size - ");
    scanf("%d",&num);

    printf("Enter elements - \n");
    int arr[num];
    int *ptr=arr;
    for(int i=0;i<num;i++){
        scanf("%d",ptr+i);
    }

    int sum=0;
    for (size_t i = 0; i < num; i++)
    {
        sum+=*(ptr+i);
    }
    printf("Sum = %d",sum);

    printf("\nJanmejai Pandey 2501030199 B4 \n");
    return 0;
}