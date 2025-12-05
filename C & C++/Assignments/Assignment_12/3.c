#include<stdio.h>

int* max(int *a,int *b){
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int x,y;
    printf("Enter two integers:\n");
    scanf("%d %d",&x,&y);

    int *maxi = max(&x,&y);
    printf("Maximum value is: %d\n",*maxi);

    printf("\nJanmejai Pandey - 2501030199 - B4");
    return 0;
}