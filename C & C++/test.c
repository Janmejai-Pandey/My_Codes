// #include<stdio.h>

// int main(){
//     int num;
//     printf("Enter number - ");
//     scanf("%d",&num);

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= 2*(num-i); j++)
//         {
//             printf(" ");
//         }
        
//         for (int j = 1; j < 2*i; j++)
//         {
//             printf("* ");
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }





// #include<stdio.h>

// int main(){
//     int num;
//     printf("Enter number - ");
//     scanf("%d",&num);

//     int arr[num];
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     for (int i = 0; i < num; i++)
//     {
//         printf("%p  ",&arr[i]);
//     }
    
    
//     return 0;
// }



// 

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number - ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j >= 1; j--)
        {
            if (i>=j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}