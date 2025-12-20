#include<stdio.h>
#include<math.h>

int main(){
    int D;
    scanf("%d",&D);

    if(D<1||D>30){
        printf("Invalid Input");
        return 1;
    }

    int minutes_i[D];
    for(int i = 0; i < D; i++){
        scanf("%d",&minutes_i[i]);
        if(minutes_i[i]<0||minutes_i[i]>1440){
            printf("Invalid Input");
            return 1;
        }
    }

    int pay_i[D];
    int blocks,preCap,afterCap,rebate;
    int totalMinutes=0,heavyUserdays=0,sumPre=0,sumPaid=0;
    
    for(int i=0;i<D;i++){
        totalMinutes+=minutes_i[i];
        blocks = ceil(minutes_i[i]/30);
        preCap = blocks *10;
        sumPre+=preCap;
        afterCap = fmin(preCap, 90);
        if(minutes_i[i]>480){
            heavyUserdays++;
            rebate = 1;
            pay_i[i] = fmax(0, (afterCap - 15));
        }
        else{
            rebate=0;
            pay_i[i] = afterCap;
        }
        sumPaid+=pay_i[i];

        printf("\nDay %d: minutes=%d,blocks=%d,preCap=%d,afterCap=%d,rebate=%s, dayPay=%d\n",minutes_i[i],blocks,preCap,afterCap,(rebate)?"YES":"NO",pay_i[i]);
    }

    printf("--- Summary ---\n");
    printf("Days=%d, TotalMinutes=%d, HeavyUserDays=%d\n",D,totalMinutes,heavyUserdays);
    printf("Sum(preCap)=%d, Sum(paid)=%d",sumPre,sumPaid);
    int cashback = (sumPaid>500)?round(0.05*sumPaid):0;
    printf("Cashback = %d\nFinal payable = %d",cashback, sumPaid-cashback);
    return 0;
}