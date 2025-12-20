//copy string to another string using recursion
#include <stdio.h>

void copy(char *src, char *dest)
{
    if (*src == '\0')
    {
        *dest = '\0';
        return;
    }
    *dest = *src;
    copy(src + 1, dest + 1);
}

int main()
{
    char str1[100], str2[100];
    printf("Enter a string - ");
    scanf("%[^\n]", str1);

    copy(str1, str2);
    printf("Copied string is - ");
    puts(str2);
    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}