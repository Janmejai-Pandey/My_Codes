#include<stdio.h>

int main(){
    printf("Input the file name to be opened : ");
    char filename[50];
    scanf("%s", filename);

    FILE *fptr;
    fptr = fopen(filename, "r");

    int count =1;
    char ch;
    while((ch = fgetc(fptr)) != EOF){
        if(ch == '\n'){
            count++;
        }
    }

    printf("The number of lines in the file %s is: %d\n", filename, count);

    printf("\nJanmejai Pandey - 2501030199 - B4\n");
    return 0;
}