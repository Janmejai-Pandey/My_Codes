#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[100];
    printf("Enter a string - ");
    scanf("%[^\n]s",str);

    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    char *ptr = (char *)malloc(count * sizeof(char));
    for (int i = 0; i < count; i++)
    {
        ptr[i] = str[i];
    }

    for (int i = 0; i < count/2; i++)
    {
        char temp = *(ptr + i);
        *(ptr + i) = *(ptr + count - i - 1);
        *(ptr + count - i - 1) = temp;
    }
    for (int i = 0; i < count/2; i++)
    {
        if (ptr[i] != str[i])
        {
            printf("The string is not a palindrome\n");
            printf("\nJanmejai Pandey 2501030199 B4 \n");
            free(ptr);
            ptr=NULL;
            return 0;
        }
    }
    printf("The string is a palindrome\n");
    printf("\nJanmejai Pandey 2501030199 B4 \n");
    free(ptr);
    ptr=NULL;
    return 0;
}   