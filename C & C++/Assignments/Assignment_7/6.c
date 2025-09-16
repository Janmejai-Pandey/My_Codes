#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter dimensions of 3d array - ");
    scanf("%d %d %d", &a, &b, &c);

    int ar[a][b][c];
    printf("Enter %d elements in array - \n",a*b*c);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                scanf("%d",&ar[i][j][k]);
            }
        }
    }
    printf("\n");
    

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("%d ",ar[j][i][k]);
            }
            printf("\t");
        }
        printf("\n");
        
    }
    printf("\n\nJanmejai Pandey 2501030199 B4\n");
    return 0;
}