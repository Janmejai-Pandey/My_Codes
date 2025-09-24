#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string ( Max 100 characters ) - ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    str[n - 1] = str[n - 1] == '\n' ? str[n - 1] = '\0' : str[n - 1];
    n--;

    char newstring[101] = " ";
    strcat(newstring,str);
    int newLen = n+1;

    printf("New String - ");
    printing:
    for (int i = 1; i < newLen; i++)
    {
        if (newstring[i-1] == ' '&& newstring[i] != ' ')
        {
            printf("%c",newstring[i]);
            newstring[i++] = ' ';
        }
    }
    for (int i = 0; i < newLen; i++)
    {
        if (newstring[i] != ' ')
        {
            goto printing;
        }
        
    }
    
    
    return 0;
}