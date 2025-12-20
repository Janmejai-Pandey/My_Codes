#include <stdio.h>
#include <malloc.h>

int main()
{
    char *str1, *str2;
    str1 = (char *)malloc(50 * sizeof(char));
    str2 = (char *)malloc(50 * sizeof(char));
    if (str1 == NULL || str2 == NULL)
    {
        printf("Memory not allocated");
        return 1;
    }
    printf("Enter first string - ");
    scanf("%49[^\n]s", str1);
    getchar();
    printf("Enter second string - ");
    scanf("%49[^\n]s", str2);

    for (int i = 0; i < 50; i++)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            printf("Strings are equal");
            break;
        }
        if (str1[i] != str2[i])
        {
            printf("Strings are not equal");
            break;
        }
    }
    free(str1);
    free(str2);
    str1 = NULL;
    str2 = NULL;
    return 0;
}