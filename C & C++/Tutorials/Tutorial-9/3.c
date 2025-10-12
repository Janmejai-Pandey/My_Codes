#include<stdio.h>

int main(){
    int n;
    printf("Enter n - ");
    scanf("%d",&n);

    int arr[n][n];
    printf("Enter %d elements - \n",n*n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\nThe matrix is - \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int sumUpper = 0, sumLower = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                sumUpper += arr[i][j];
            }
            if (i >= j)
            {
                sumLower += arr[i][j];
            }
        }
    }
    printf("\nSum of upper triangular matrix - %d\n",sumUpper);
    printf("Sum of lower triangular matrix - %d\n",sumLower);
    return 0;
}