#include<stdio.h>

int main(){
    int n=4;
    int arr[4][4];
    printf("Enter %d elements - \n",n*n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    printf("\nEnter Row 1 - ");
    int r1;
    scanf("%d",&r1);
    while(r1<0 || r1>=n){
        printf("Invalid Row 1\n");
        printf("Enter Row 1 - ");
        scanf("%d",&r1);
    }
    
    printf("Enter Row 2 - ");
    int r2;
    scanf("%d",&r2);
    while(r2<0 || r2>=n || r2==r1){
        if(r2==r1){
            printf("Row 2 cannot be same as Row 1\n");
        }else{
            printf("Invalid Row 2\n");
        }
        printf("Enter Row 2 - ");
        scanf("%d",&r2);
    }
    //same for columns
    printf("Enter Column 1 - ");
    int c1;
    scanf("%d",&c1);
    while(c1<0 || c1>=n){
        printf("Invalid Column 1\n");
        printf("Enter Column 1 - ");
        scanf("%d",&c1);
    }
    printf("Enter Column 2 - ");
    int c2;
    scanf("%d",&c2);
    while(c2<0 || c2>=n || c2==c1){
        if(c2==c1){
            printf("Column 2 cannot be same as Column 1\n");
        }else{
            printf("Invalid Column 2\n");
        }
        printf("Enter Column 2 - ");
        scanf("%d",&c2);
    }

    printf("\nThe original matrix is - \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    for (int j = 0; j < n; j++)
    {
        int temp = arr[r1][j];
        arr[r1][j] = arr[r2][j];
        arr[r2][j] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i][c1];
        arr[i][c1] = arr[i][c2];
        arr[i][c2] = temp;
    }
    printf("\nThe matrix after swapping is - \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}