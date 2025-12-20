#include<stdio.h>

int main(){
    int num;
    printf("Enter number of elements - ");
    scanf("%d",&num);

    int ar[num];
    printf("Enter %d elements in array - ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=0;
    float avg;
    for (int i = 0; i < num; i++)
    {
        sum+=ar[i];
    }
    avg = sum / (float)num;
    printf("\nSum of elements = %d", sum);
    printf("\nAverage of elements = %f", avg);
    
    printf("\n\nJanmejai Pandey 2501030199 B4");
    return 0;
}