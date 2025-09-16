#include<stdio.h>
int count = 0;

    void move(char source, char helper, char destination, int n ){
        if (n==1){
            printf("Move ring 1 from %c to %c\n", source,destination);
            count++;
            return;
        }
        move(source, destination, helper,n-1);
        printf("Move ring %d from %c to %c\n", n, source,destination);
        count++;
        move(helper, source, destination,n-1);
    }

    int main(){
    int num;
    printf("Enter number - ");
    scanf("%d",&num);
    move('A','B','C',num);
    printf("Total Ways = %d",count);
    return 0;
}