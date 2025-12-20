#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter size of array - ");
    scanf("%d",&size);
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr==NULL)
    {
        printf("Memory not allocated");
        return 1;
    }
    
    printf("Enter elements of array - \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements in array are - ");
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
        sum+=arr[i];
    }
    printf("\nSum of all elements = %d\n",sum);
    printf("\nJanmejai Pandey 2501030199 B4 \n");
    free(arr);
    arr=NULL;
    return 0;
}