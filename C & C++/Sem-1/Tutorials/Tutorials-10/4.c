#include <stdio.h>

void deposit(int *balance, int amount) {
    *balance =  *balance + amount;
}

void withdraw(int *balance, int amount) {
    *balance =  *balance - amount;
}

int main() {
    int balance = 5000;

    deposit(&balance, 2000);
    withdraw(&balance, 1000);

    printf("Final balance: %d\n", balance);
    return 0;
}