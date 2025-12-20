#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string - ");
    fgets(str,100,stdin);
    
    char *ptr = str;
    int count=0;
    while (ptr[count] !='\0'&&ptr[count]!='\n')
    {
        count++;
    }
    printf("Length of string = %d",count);

    printf("\nJanmejai Pandey 2501030199 B4\n");
    return 0;
}