#include<stdio.h>

int main(){
    int size;
    printf("Enter the size - ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements - \n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int hcf=1;
    for(int i=2;i<=arr[0];i++){
        int flag=1;
        for(int j=0;j<size;j++){
            if(arr[j]%i!=0){
                flag=0;
                break;
            }
        }
        if(flag)
            hcf=i;
    }

    printf("HCF is %d\n",hcf);
    return 0;
}