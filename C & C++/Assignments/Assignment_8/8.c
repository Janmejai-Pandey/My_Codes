#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Enter a string(Max 100 characters) - ");
    char *ptr = (char *)malloc(101*sizeof(char));
    if(ptr==NULL){
        printf("Memory not allocated");
        return 1;
    }

    scanf("%100[^\n]", ptr);

    puts(ptr);

    int len=0;
    while(ptr[len] != '\0')
    {
        len++;
    }
    
    for (int i = 0; i < len/2; i++)
    {
        char temp=ptr[i];
        ptr[i]=ptr[len-i-1];
        ptr[len-i-1]=temp;
    }

    printf("Reversed string - ");
    puts(ptr);
    free(ptr);
    ptr=NULL;

    printf("\nJanmejai Pandey 2501030199 B4 \n");
    return 0;
}