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

    //sum of diagonal elements
    int mainSum=0;
    int secondarySum=0;
    for (int i = 0; i < n; i++)
    {
        mainSum+=arr[i][i];
        secondarySum+=arr[i][n-i-1];
    }
    printf("Sum of main diagonal elements = %d\n",mainSum);
    printf("Sum of secondary diagonal elements = %d\n",secondarySum);
    int diff=mainSum-secondarySum;
    printf("Difference between main and secondary diagonal elements = %d\n",diff);
    return 0;
}