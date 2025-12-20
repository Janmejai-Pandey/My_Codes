#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elements(less than or equal to 20)- ");
    scanf("%d",&n);

    int marks[n];
    int marks2[20];

    printf("\nEnter %d elements - \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
        marks2[i] = marks[i];
    }

    int max = marks[0];
    int min = marks[0];
    int sum=0;
    
    printf("\nArray elements - ");
    for (int i = 0; i < n; i++)
    {
        sum+=marks[i];
        if(max<marks[i]){
            max=marks[i];
        }
        if (min > marks[i])
        {
            min = marks[i];
        }

        printf("%d ", marks[i]);
    }
    
    printf("\n\nHighest Element = %d",max);
    printf("\nLowest Element = %d",min);

    float avg = (float)sum / n;
    printf("\nAverage = %g",avg);

    //Sorting the array
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(marks2[j]>marks2[j+1]){
                marks2[j]^=marks2[j+1];
                marks2[j+1]^=marks2[j];
                marks2[j]^=marks2[j+1];
            }
        }
    }
    
    printf("\n\nSorted array elements - ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",marks2[i]);
    }
    
    int fr = 1, frMax=1, mode = marks2[0]; // 1 2 12 45 45 62
    for (int i = 0; i < n-1; i++)
    {
        if(marks2[i]==marks2[i+1])
            fr++;
        else{
            if (frMax<fr)
            {
                frMax = fr;
                mode = marks2[i];
                fr = 1;
            }
            
        }
    }

    float median = (n % 2 == 0)? ( marks2[n/2-1] + marks2[n/2] ) / 2.0 : marks2[n/2];
    printf("\n\nMedian = %g",median);
    if(frMax != 1)
        printf("\nMode = %d",mode);
    else
        printf("\nMode doesnt exist");
    
    int j=0;
    int marks3[20];
    for (int i = 0; i < n; i++)
    {
        if (marks2[i]==marks2[i+1])
        {
            continue;
        }
        marks3[j++]=marks2[i];
    }

    printf("\n\nArray containing unique elements - ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ",marks3[i]);
    }

    return 0;
}