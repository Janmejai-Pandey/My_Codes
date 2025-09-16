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
    return 0;
}