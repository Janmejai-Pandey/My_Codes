#include<stdio.h>

int main(){
    printf("Enter name of first file: ");
    char f1[50];
    scanf("%s", f1);

    printf("Enter name of second file: ");
    char f2[50];
    scanf("%s", f2);

    FILE *file1 = fopen(f1, "r");
    FILE *file2 = fopen(f2, "r");
    if(file1 == NULL || file2 == NULL){
        printf("Error opening one of the files.\n");
        return 1;
    }
    
    printf("Enter name to store merged file: ");
    char f3[50];
    scanf("%s", f3);
    FILE *mergedFile = fopen(f3, "w");
    if(mergedFile == NULL){
        printf("Error creating merged file.\n");
        return 1;
    }

    char ch;
    while((ch = fgetc(file1)) != EOF){
        fputc(ch, mergedFile);
    }
    while((ch = fgetc(file2)) != EOF){
        fputc(ch, mergedFile);
    }

    printf("Files merged successfully into %s\n", f3);
    printf("\nJanmejai Pandey - 2501030199 - B4\n");
}