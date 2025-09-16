#include<stdio.h>

int ways(int m, int n);
int main(){
    int m,n;
    printf("Enter rows - ");
    scanf("%d",&m);
    printf("Enter columns - ");
    scanf("%d",&n);

    int way = ways(m,n);
    printf("No of ways of traversal are - %d", way);

    return 0;
}
int ways(int m,int n){
    if(m==1||n==1){
        return 1;
    }
    return ways(m,n-1)+ ways(m-1,n);
}