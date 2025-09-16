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



#include<stdio.h>

int main(){
    int num;
    printf("Enter number of elements - ");
    scanf("%d",&num);

    int ar[num];
    printf("Enter %d elements in array - \n",num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&ar[i]);
    }
    
    printf("Enter Search element - ");
    int key;
    scanf("%d", &key);
    int count = 0;

    for (int i = 0; i < num; i++)
    {
        if (ar[i]==key)
        {
            count++;
            printf("%d found at index %d\n",key,i);
        }
    }

    if (count==0){
        printf("%d is not found in array.",key);
    }
    else{
        printf("%d was found %d times",key,count);
    }
    
    return 0;
}