#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string");
    fgets(str, 100, stdin);
    int len = strlen(str) - 1;
    int visited[len];

    for (size_t i = 0; i < len; i++)
    {
        int count = 1;
        if (visited[i] == 1)
        {
            continue;
        }

        for (int j = i + 1; j < len; j++)
        {

            if (str[i] == str[j])
            {
                visited[j] = 1;
                count++;
            }
        }
        printf("\n%c occurs %d time", str[i], count);
    }

    printf("\n\nJanmejai Pandey 2501030199 B4");

    return 0;
}