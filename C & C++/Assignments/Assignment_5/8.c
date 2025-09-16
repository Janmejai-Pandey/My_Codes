#include<stdio.h>

    int main(){
    int n;
    printf("Enter n - ");
    scanf("%d",&n);

    int sum = 0;
    for(int i =1;i<=n; i+=2){
        sum += i;
    }
    printf("Sum of odd numbers till %d = %d", n, sum);

    printf("\n\nJanmejai Pandey JEG254252 B4");
    return 0;
}