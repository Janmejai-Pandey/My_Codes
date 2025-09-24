#include<stdio.h>

void leftShift(int *arr,int n);
void rightShift(int *arr,int n,int part);


int main(){
    printf("Enter size - ");
    int n;
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements - ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter shift - ");
    int shift;
    scanf("%d",&shift);
    
    for(int i=0;i<shift;i++){
        leftShift(arr,n/2);
        rightShift(arr,n,n/2);
    }   

    printf("Array after shift - ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
    
void leftShift(int *arr,int n){
    int key = arr[0];
    for (size_t i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = key;
}

void rightShift(int *arr,int n,int part){
    int key = arr[n-1];
    for (int i = n-1; i > n-part; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[n-part] = key;
}