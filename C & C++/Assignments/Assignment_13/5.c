#include<stdio.h>

int main(){
    printf("Input the file name to be opened : ");
    char filename[50];
    scanf("%s", filename);
    
    FILE *fptr;
    fptr = fopen(filename, "r");
    if(fptr == NULL){
        printf("Error opening file %s\n", filename);
        return 1;
    }
    printf("The content of the file %s is:\n", filename);
    char ch;
    while((ch = fgetc(fptr)) != EOF){
        putchar(ch);
    }
    
    fclose(fptr);
    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}