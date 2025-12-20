#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string - ");
    fgets(str, sizeof(str), stdin);
    printf("\n");
    int n = strlen(str);
    str[n - 1] = str[n - 1] == '\n' ? str[n - 1] = '\0' : str[n - 1];
    n--;

    char ch;
    printf("Enter character to insert - ");
    scanf(" %c", &ch);
    printf("Enter position to insert character - ");
    int pos;
    scanf("%d", &pos);
    
    if (pos < 0 || pos > n)
    {
        printf("Invalid position\n");
        return 1;
    }
    for (int i = n; i >= pos; i--)
        str[i + 1] = str[i];
    str[pos] = ch;
    printf("\nString after insertion - ");
    puts(str);
    return 0;
}