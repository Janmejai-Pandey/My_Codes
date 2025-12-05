//largest in array using recursion

#include <stdio.h>
int maxi(int *arr, int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int max = maxi(arr, n - 1);
    if (arr[n - 1] > max)
    {
        return arr[n - 1];
    }
    else
    {
        return max;
    }
}

int main()
{
    int size;
    printf("Enter size of array - ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of array - ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = maxi(arr, size);
    printf("Largest element in the array is %d\n", result);
    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}