#include<stdio.h>

void cube(int n){
    for(int i=1;i<=n;i++){
        printf("The cube of %d is %d\n",i,i*i*i);
    }
}

int main(){
    int num;
    printf("Enter a number - ");
    scanf("%d",&num);

    printf("Cubes of numbers from 1 to %d are:\n",num);
    cube(num);
    return 0;
}