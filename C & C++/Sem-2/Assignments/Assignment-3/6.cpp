#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
    char *accountHolder;
    double balance;
public:
    BankAccount(const char *name, double bal) {
        balance = bal;
        accountHolder = new char[strlen(name) + 1];
        strcpy(accountHolder, name);
    }

    BankAccount(const BankAccount &accObj) {
        balance = accObj.balance;
        accountHolder = new char[strlen(accObj.accountHolder) + 1];
        strcpy(accountHolder, accObj.accountHolder);
    }

    ~BankAccount() {
        delete[] accountHolder;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: Rs." << balance << endl;
    }
};

int main() {
    BankAccount acc1("Janmejai Pandey", 5000.0);
    cout << "Account 1 Details:" << endl;
    acc1.display();
    cout << endl;
    BankAccount acc2 = acc1;
    cout << "Account 2 Details:" << endl;
    acc2.display();
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}