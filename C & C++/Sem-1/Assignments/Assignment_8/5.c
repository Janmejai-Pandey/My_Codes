#include<stdio.h>
#include<malloc.h>

int main(){
    int num;
    printf("Enter size of elements - ");
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

    printf("Original Array - ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",*(ptr+i));
    }
    

    for (int i = 0; i < num/2; i++)
    {
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+num-i-1);
        *(ptr+num-i-1)=temp;
    }
    printf("\nReversed array - \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",*(ptr+i));
    }

    free(ptr);
    ptr=NULL;
    
    printf("\nJanmejai Pandey 2501030199 B4 \n");
    return 0;
}