#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str = (char *)malloc(100 * sizeof(char));
    printf("Enter a string - ");
    scanf("%[^\n]s",str);
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    int vowels=0,consonants=0;
    for (int i = 0; i < count; i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonants++;
        }
    }
    printf("Number of vowels = %d\n",vowels);
    printf("Number of consonants = %d\n",consonants);
    printf("\nJanmejai Pandey 2501030199 B4 \n");
    free(str);
    str=NULL;
    return 0;
}