#include<stdio.h>

void subsetSum(int arr[], int n, int i,int sum)
{
    if (i == n)
    {
        printf("%d\n", sum);
        return;
    }
    subsetSum(arr, n, i + 1, sum + arr[i]);
    subsetSum(arr, n, i + 1, sum);
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

    printf("All subset sums are - \n");
    subsetSum(arr, size, 0, 0);
    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}