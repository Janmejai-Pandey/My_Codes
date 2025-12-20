#include <stdio.h>
#include <limits.h>

int main()
{
    int size;
    printf("Enter size of array - ");
    scanf("%d", &size);
    printf("\n");

    int arr[size];
    printf("Enter elements in array - ");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Elements before rotating:");
    for (size_t i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    
    int temp = arr[0];
    for (size_t i = 0; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;

    printf("Array Elements after rotating:");
    for (size_t i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");

    printf("\nJanmejai Pandey 2501030199 B4\n");

    return 0;
}