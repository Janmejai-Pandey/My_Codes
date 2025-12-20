#include<stdio.h>

int main(){
    printf("Input the number of lines to be written : ");
    int n;
    scanf("%d", &n);
    printf("Input %d lines:\n", n);
    getchar();

    FILE *f1;
    f1 = fopen("test.txt", "w");
    for(int i = 0; i < n; i++){
        char str[100];
        fgets(str, sizeof(str), stdin);
        fputs(str, f1);
    }
    fclose(f1);

    FILE *f2;
    f2 = fopen("test.txt", "r");
    printf("\nThe content of the file test.txt is:\n");
    char ch;
    while((ch = fgetc(f2)) != EOF){
        putchar(ch);
    }
    printf("\nJanmejai Pandey - 2501030199 - B4\n");
    return 0;
}