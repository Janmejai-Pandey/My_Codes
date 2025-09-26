#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string - ");
    gets(str);

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("Length of String = %d", len);
    printf("\n\nJanmejai Pandey JEG254252 B4");
}
