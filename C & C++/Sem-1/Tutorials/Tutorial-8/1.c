#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string ( Max 100 characters ) - ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to delete - ");
    char ch;
    scanf(" %c", &ch);

    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr == ch) {
            for (int i = 0; *(ptr+i)!='\0'; i++) {
                *(ptr + i) = *(ptr + i + 1);
            }
        } else {
            ptr++;
        }
    }
    printf("String after deleting - ");
    fputs(str, stdout);
    return 0;
}