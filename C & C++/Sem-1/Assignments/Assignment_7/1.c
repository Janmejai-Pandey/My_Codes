#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string - ");
    fgets(str, 100, stdin);

    int i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] < 'z')))
            str[i] = ' ';
        i++;
    }

    i = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            printf("%c", str[i]);
        i++;
    }
    printf("\n\nJanmejai Pandey JEG254252 B4");
    return 0;
}