#include <stdio.h>

int main()
{
    int row;
    printf("Enter order of array - ");
    scanf("%d", &row);

    int arr[row][row];
    printf("Enter the elements of the array - \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The elements of the array are - \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of row %d is %d\n", i + 1, sum);
    }

    for (int j = 0; j < row; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        printf("Sum of column %d is %d\n", j + 1, sum);
    }

    printf("\nThe diagonal elements are - \n");
    int diagonal = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                diagonal += arr[i][j];
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("Sum of diagonal is %d", diagonal);
    return 0;
}