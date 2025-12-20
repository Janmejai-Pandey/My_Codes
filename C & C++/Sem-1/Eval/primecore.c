#include<stdio.h>
#include<math.h>

int main(){
    for (int i = 100; i <= 10000; i++)
    {
        int num=i;
        int copyNum = i;
        int len = 0;
        while (copyNum>0)
        {
            len++;
            copyNum/=10;
        }
        int first = num/(int)pow(10,len-1);
        int last = num%10;
        int sum = first + last;
        num = num%(int)pow(10,len-1);
        num/=10;
        if(sum==1||num==1||num==0)
            goto next;
        
        for(int j = 2; j*j <= num; j++)
        {
            if (num%j==0)
            {
                goto next;
            }
        }
        for(int j = 2; j*j <= sum; j++)
        {
            if (sum%j==0)
            {
                goto next;
            }
        }
        printf("%d ", i);
        next:;
    }
    
    return 0;
}