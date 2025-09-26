#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string - ");
    fgets(str,100,stdin);
    
    char *ptr = str;
    while (*ptr !='\0'||*ptr!='\n')
    {
        ptr++;
    }
    printf("Length of string = %d",ptr-str);

    printf("\nJanmejai Pandey 2501030199 B4\n");
    return 0;
}