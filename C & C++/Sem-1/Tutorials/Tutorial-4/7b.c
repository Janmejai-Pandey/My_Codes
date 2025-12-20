#include<stdio.h>

    int main(){
    int f,l;
    printf("Enter lower limit - ");
    scanf("%d",&f);
    printf("Enter upper limit - ");
    scanf("%d",&l);

    int sum=0;
    for (int i = f; i <= l; i++)
    {
        sum+=i;
    }
    
    return 0;
}