#include<stdio.h>
#include<stdio.h>

int main(){
    printf("Inptut a sentence for the file : ");
    char str[100];
    fgets(str, sizeof(str), stdin);
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    fputs(str, fptr);
    fclose(fptr);
    printf("The file test.txt created successfully...!!\n");

    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}