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

    printf("Left diagonal elements are - \n");
    for (size_t i = 0; i < order; i++)
    {
        for (size_t j = 0; j < order; j++)
        {
            if(i+j == order-1){
                printf("%d ",matrix[i][j]);
            }
        }
    }
    printf("\n");

    printf("Right diagonal elements are - \n");
    for (size_t i = 0; i < order; i++)
    {
        for (size_t j = 0; j < order; j++)
        {
            if(i == j){
                printf("%d ",matrix[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}