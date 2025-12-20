#include<stdio.h>

    int main(){
    int num;
    printf("Enter number - ");
    scanf("%d",&num);

    printf("Table of %d - ");
    for(int i =1;i<=10; i++){
        printf("\n%d x %d = %d", num, i, num*i);
    }
    printf("\n\nJanmejai Pandey JEG254252 B4");
    return 0;
}