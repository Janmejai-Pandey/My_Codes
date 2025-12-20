#include<stdio.h>

int main(){
    int order;
    printf("Enter order of square matrix - ");
    scanf("%d",&order);

    int matrix[order][order];
    printf("Enter elements of matrix - \n");
    for (size_t i = 0; i < order; i++)
    {
        for (size_t j = 0; j < order; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The entered matrix is - \n");
    for (size_t i = 0; i < order; i++)
    {
        for (size_t j = 0; j < order; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for (size_t i = 0; i < order; i++)
    {
        for (size_t j = 0; j < order; j++)
        {
            if(i <=j){
                sum+= matrix[i][j];
            }
        }
    }
    printf("Sum of Upper Triangular Matrix = %d\n",sum);

    printf("\n");
    return 0;
}