#include<stdio.h>

int isArthematic(int arr[],int n){
    int diff = arr[1] - arr[0];
    for (int i = 1; i < n-1; i++)
    {
        if(arr[i+1]-arr[i]!=diff) return 0;
    }
    return 1;
}

int isGeometric(int arr[],int n){
    double diff = (double)arr[1]/arr[0];
    for (int i = 1; i < n-1; i++)
    {
        if((double)arr[i+1]/arr[i]!=diff) return 0;
    }
    return 1;
}

int main(){
    int num;
    printf("Enter number of elements in array- ");
    scanf("%d",&num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    if (isArthematic(arr,num))
    {
        printf("Arthematic Series");
    }
    else if (isGeometric(arr,num))
    {
        printf("Geometric Series");
    }
    else
    {
        printf("Neither Arthematic Nor Geometric Series");
    } 
    return 0;
}