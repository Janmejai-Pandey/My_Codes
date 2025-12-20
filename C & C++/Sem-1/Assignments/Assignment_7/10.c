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

    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
    {
        printf("All elements are the same");
    }
    else
    {
        printf("Second Smallest element = %d", secondSmallest);
    }

    printf("\n\nJanmejai Pandey 2501030199 B4\n");

    return 0;
}