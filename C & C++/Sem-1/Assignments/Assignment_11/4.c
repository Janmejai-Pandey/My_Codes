#include<stdio.h>

struct bank
{
    int acc_no;
    char name[50];
    float balance;
};

int main(){
    int n;
    printf("Enter number of account holders: ");
    scanf("%d", &n);
    struct bank b[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for account holder %d\n", i + 1);
        printf("Name: ");
        scanf("%s", b[i].name);
        printf("Account Number: ");
        scanf("%d", &b[i].acc_no);
        printf("Balance: ");
        scanf("%f", &b[i].balance);
    }

    printf("Menu:\n");
    printf("1. Print all account holders\n");
    printf("2. Withdraw money\n");
    printf("3. Deposit money\n");
    printf("4. Search Customer\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            for (int i = 0; i < n; i++)
            {
                printf("Account Holder %d:\n", i + 1);
                printf("Name: %s\n", b[i].name);
                printf("Account Number: %d\n", b[i].acc_no);
                printf("Balance: %.2f\n", b[i].balance);
            }
            break;
        case 2:
        {
            int acc_no;
            float amount;
            printf("Enter account number to withdraw from: ");
            scanf("%d", &acc_no);
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            for (int i = 0; i < n; i++)
            {
                if (b[i].acc_no == acc_no)
                {
                    if (b[i].balance >= amount)
                    {
                        b[i].balance -= amount;
                        printf("Withdrawal successful. New balance: %.2f\n", b[i].balance);
                    }
                    else
                    {
                        printf("Insufficient balance.\n");
                    }
                    break;
                }
            }
            break;
        }
        case 3:
        {
            int acc_no;
            float amount;
            printf("Enter account number to deposit to: ");
            scanf("%d", &acc_no);
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            for (int i = 0; i < n; i++)
            {
                if (b[i].acc_no == acc_no)
                {
                    b[i].balance += amount;
                    printf("Deposit successful. New balance: %.2f\n", b[i].balance);
                    break;
                }
            }
            break;
        }
        case 4:
        {
            int acc_no;
            printf("Enter account number to search: ");
            scanf("%d", &acc_no);
            for (int i = 0; i < n; i++)
            {
                if (b[i].acc_no == acc_no)
                {
                    printf("Account Holder Details:\n");
                    printf("Name: %s\n", b[i].name);
                    printf("Account Number: %d\n", b[i].acc_no);
                    printf("Balance: %.2f\n", b[i].balance);
                    break;
                }
            }
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }
    printf("Janmejai Pandey 25010301199 B4");
    return 0;
}