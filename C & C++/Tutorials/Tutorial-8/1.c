#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string ( Max 100 characters ) - ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    str[n - 1] = str[n - 1] == '\n' ? str[n - 1] = '\0' : str[n - 1];
    n--;

    printf("Enter a character to delete - ");
    char ch;
    scanf(" %c", &ch);

    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr == ch) {
            for (int i = 0; i < n; i++) {
                *(ptr + i) = *(ptr + i + 1);
            }
            n--;
            *(ptr + n) = '\0';
        } else {
            ptr++;
        }
    }
    {
        /* code */
    }
    
    return 0;
}