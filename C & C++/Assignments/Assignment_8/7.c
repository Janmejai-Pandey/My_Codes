#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Enter size of array - ");
    scanf("%d",&num);

    int *ptr=(int *)malloc(num*sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated");
        return 1;
    }
    printf("Enter elements - \n");
    for(int i=0;i<num;i++){
        scanf("%d",ptr+i);
    }

    printf("Entered elements - ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",*(ptr+i));
    }

    //sorting
    for (int i = 0; i < num-1; i++)
    {
        for (int j = 0; j < num-i-1; j++)
        {
            if(*(ptr+j)>*(ptr+j+1)){
                int temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }

    printf("\nEnter value of k - ");
    int k;
    scanf("%d",&k);

    printf("Kth smallest element = %d",*(ptr+k-2));
    free(ptr);
    ptr=NULL;
     
    return 0;
}