#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end)
    {
        swap(start, end);
        start++;
        end--;
    }
}

int main(){
    printf("Enter size of array - ");
    int size;
    scanf("%d", &size);

    int *arr=(int *)malloc(size * sizeof(int));
    printf("Enter elements of array - ");
    for(int i = 0; i < size; i++){
        scanf("%d", arr + i);
    }

    reverseArray(arr, size);
    printf("Reversed array is - ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    return 0;
}