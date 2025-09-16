#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    printf("Enter a username - ");
    fgets(username, sizeof(username), stdin);
    int n = strlen(username);
    username[n - 1] = username[n - 1] == '\n' ? username[n - 1] = '\0' : username[n - 1];
    n--;

    int j = 0;
    for (size_t i = 0; i < n ; i++)
    {
        if (username[i]!=' ')
        {
            username[j++] = username[i];
        }
    }
    username[j] = '\0';
    fputs(username, stdout);
    printf("\n");

    return 0;
}