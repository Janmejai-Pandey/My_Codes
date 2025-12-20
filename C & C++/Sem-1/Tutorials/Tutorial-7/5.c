#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string ( Max 100 characters ) - ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    str[n - 1] = str[n - 1] == '\n' ? str[n - 1] = '\0' : str[n - 1];
    n--;

    char final[200];
    int j = 0;int count = 1;
    for (int i = 0; i < n; i++){

        if (str[i] ==str[i+1]){
            count++;
        }
        else{
            final[j++] = str[i];
            final[j++] = count+'0';
            count = 1;
        }
    }
    final[j] = '\0';
    printf("String after compression - ");
    puts(final);

    return 0;
}