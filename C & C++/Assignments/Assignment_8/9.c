#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter size of array - ");
    scanf("%d",&size);

    int arr[size][size];
    printf("Enter elements of array - \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int sum = 0;
    int( *ptr)[size] = arr;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum += *(*(ptr + i) + j);
        }
    }
    printf("Sum of all elements = %d\n",sum);
    printf("\nJanmejai Pandey 2501030199 B4 \n");
    free(ptr);
    ptr=NULL;
    return 0;
}