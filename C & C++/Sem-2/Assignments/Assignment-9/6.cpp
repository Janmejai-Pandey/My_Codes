#include <iostream>
using namespace std;


class BankAccount {
    double balance;


public:
    BankAccount(double b) { balance = b; }


    void withdraw(double amount) {
        if (amount < 0)
            throw "Negative withdrawal not allowed!";


        if (amount > balance)
            throw "Insufficient balance!";


        balance -= amount;
        cout << "Withdrawal successful! Remaining balance: " << balance << endl;
    }
};


int main() {
    BankAccount acc(1000);
    double amt;


    cout << "Enter amount to withdraw: ";
    cin >> amt;


    try {
        acc.withdraw(amt);
    }
    catch (const char* msg) {
        cout << msg << endl;
    }


    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
