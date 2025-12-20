#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter a string - ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    str[n-1] =  str[n - 1] == '\n' ? str[n - 1] = '\0' : str[n - 1];
    n--;
    fputs(str, stdout);
    printf("\n");

    for (int i = 0; i < n+4; i++)
    {
        printf("*");
    }
    printf("\n* ");
    fputs(str, stdout);
    printf(" *\n");
    for (int i = 0; i < n+4; i++)
    {
        printf("*");
    }    
    return 0;
}