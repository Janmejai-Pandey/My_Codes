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
    
    while (i*i>len)
    {
        str[len++]='*';
    }
    str[len]='\0';
    int arr[i][i];
    int k=0;
    for (size_t a = 0; a < i; a++)
    {
        for (size_t b = 0; b < i; b++)
        {
            arr[a][b]=str[k++];
        }
    }

    for (size_t a = 0; a < i; a++)
    {
        for (size_t b = 0; b < a; b++)
        {
            char temp = arr[a][b];
            arr[a][b]=arr[b][a];
            arr[b][a]=temp;
        }
    }
    
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < i; b++)
        {
            printf("%c ", arr[a][b]);
        }
    }
    
    
    return 0;
}