#include <stdio.h>

int main(){
    printf("Enter order of matrices - ");
    int n;
    scanf("%d",&n);

    int mat1[n][n];
    printf("Enter %d elements is matrix 1 - ",n*n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    int mat2[n][n];
    printf("Enter %d elements is matrix 2 - ",n*n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    int result[n][n];  //Variables of index of resultant matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j]=0;
        }
        
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant matrix is - \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    printf("\n\nJanmejai Pandey JEG254252 B4");
    return 0;
}