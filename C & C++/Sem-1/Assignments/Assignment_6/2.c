#include<stdio.h>

    int main(){
    int num;
    printf("Enter number - ");
    scanf("%d",&num);

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int c5 = 0;
    int c6 = 0;
    int c7 = 0;
    int c8 = 0;
    int c9 = 0;
    int c0 = 0;

    while (num>0)
    {
        switch (num%10)
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            c5++;
            break;
        case 6:
            c6++;
            break;
        case 7:
            c7++;
            break;
        case 8:
            c8++;
            break;
        case 9:
            c9++;
            break;
        
        default:
            c0++;
            break;
        }
        num /= 10;
    }

    printf("Frequency of 0 = %d",c0);
    printf("\nFrequency of 1 = %d",c1);
    printf("\nFrequency of 2 = %d",c2);
    printf("\nFrequency of 3 = %d",c3);
    printf("\nFrequency of 4 = %d",c4);
    printf("\nFrequency of 5 = %d",c5);
    printf("\nFrequency of 6 = %d",c6);
    printf("\nFrequency of 7 = %d",c7);
    printf("\nFrequency of 8 = %d",c8);
    printf("\nFrequency of 9 = %d",c9);
    
    return 0;
}