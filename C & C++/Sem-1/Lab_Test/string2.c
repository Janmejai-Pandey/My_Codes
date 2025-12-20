#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string ( Max 100 characters ) - ");
    fgets(str, sizeof(str), stdin);
    int n=0;
    while (str[n]=='\0') {
        if (str[n++] == '\n')
        {
            str[n - 1] = '\0';
            break;
        }
    }

    char str2[100];
    printf("Enter a string ( Max 100 characters ) - ");
    fgets(str2, sizeof(str2), stdin);
    int n2=0;
    while (str2[n2]=='\0') {
        if (str2[n2++] == '\n')
        {
            str[n2 - 1] = '\0';
            break;
        }
    }
    

    printf("New String - ");
    for (size_t i = 0; i < n - 1; i++)
    {

        if (str[i] == str2[0])
        {
            int flag = 1;
            for (int j = 1; j < n2; j++)
            {
                if (str[i + j] != str2[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                i += n2;
                n2 = 0;
            }
        }

        printf("%c", str[i]);
    }

    return 0;
}