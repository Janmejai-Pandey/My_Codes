#include <bits/stdc++.h>
using namespace std;
class BankAccount
{
    string name;
    int acc_no;
    double balance;

    public:
    void setData(string n, int a, double b)
    {
        name = n;
        acc_no = a;
        balance = b;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    void display()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    string name;
    int acc_no;
    double balance;
    cout << "Enter account holder name, account number and initial balance:" << endl;
    getline(cin, name);
    cin >> acc_no >> balance;
    account.setData(name, acc_no, balance);
    account.display();
    
    do{
        cout << "Choose an option: 1. Deposit 2. Withdraw 3. Display 4. Exit" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
        }
        else if (choice == 2)
        {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
        }
        else if (choice == 3)
        {
            account.display();
        }
        else if (choice == 4)
        {
            cout << "Exiting..." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (true);
    cout << "\nJanmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}