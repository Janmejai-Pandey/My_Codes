#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string(Max 100 characters) - ");
    scanf("%99[^\n]s", str);

    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    for (; len < 16; len++)
    {
        str[len] = '*';
    }
    str[len] = '\0';
    printf("String length - %d\n", len);

    int i =  4;
    while (i*i <len)
    {
        i++;
    }
    printf("Smallest perfect square - %d\n", i*i);
    
    return 0;
}