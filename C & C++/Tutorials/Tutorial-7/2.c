#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a sentence - ");
    fgets(str, sizeof(str), stdin);
    printf("\n");
    int n = strlen(str);
    str[n - 1] = str[n - 1] == '\n' ? str[n - 1] = '\0' : str[n - 1];
    n--;

    int countVowels = 0, countConsonats = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            countVowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            countConsonats++;
        }
    }
    printf("Vowels - %d\nConsonants - %d\n", countVowels, countConsonats);
    return 0;
}