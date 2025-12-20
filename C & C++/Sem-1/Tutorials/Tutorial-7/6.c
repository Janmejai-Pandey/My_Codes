#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string ( Max 100 characters ) - ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    str[n - 1] = str[n - 1] == '\n' ? str[n - 1] = '\0' : str[n - 1];
    n--;

    if (n < 7 || n > 15)
    {
        printf("Alphabets, digits, and special characters count should not be less than 7 and more than 15");
        return 1;
    }

    char pass[100];
    int j = 0;
    for (size_t i = 0; i < n; i++)
    {
        if ((str[i]<='Z'&&str[i]>='A'))
        {
            int temp = str[i] +2;
            pass[j++]= temp/10+'0';
            pass[j++]= temp%10+'0';
        }
        else if ((str[i]<='z'&&str[i]>='a'))
        {
            int temp = str[i] +2;
            pass[j++]= temp/100+'0';
            temp = temp%100;
            pass[j++]= temp/10+'0';
            pass[j++]= temp%10+'0';
        }

        else if ((str[i]<='9'&&str[i]>='0'))
        {
            pass[j++]= 'Z'-(str[i]-'0');
        }
        else
        {
            pass[j++]= str[i];
        }
    }
    pass[j] = '\0';
    printf("\nEncrypted password - ");
    puts(pass);
    printf("\n");

    return 0;
}