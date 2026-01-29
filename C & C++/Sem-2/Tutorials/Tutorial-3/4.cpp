#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
    string name;
    int accNumber;
    char accType; 
    double balanceAmt;
public:
    void initialize()
    {
        cout << "Enter Depositor Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accNumber;
        cout << "Enter Account Type (S for Savings, C for Current): ";
        cin >> accType;
        cout << "Enter Initial Balance Amount: ";
        cin >> balanceAmt;
    }

    void depositMoney(double amount)
    {
        balanceAmt += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balanceAmt << endl;
    }

    void withdrawMoney(double amount)
    {
        if (balanceAmt - amount >= 1000)
        {
            balanceAmt -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balanceAmt << endl;
        }
        else
        {
            cout << "Insufficient Balance. Minimum balance of Rs. 1000 must be maintained." << endl;
        }
    }

    void displayInfo()
    {
        cout << "Depositor Name: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Account Type: " << accType << endl;
        cout << "Balance Amount: " << balanceAmt << endl;
    }
};

int main()
{
    BankAccount accounts[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Customer " << (i + 1) << ":\n";
        accounts[i].initialize();
    }

    while (true)
    {
        int choice, accIndex;
        double amount;

        cout << "\nMenu:\n1. Deposit Money\n2. Withdraw Money\n3. Display Account Info\n4. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 4) break;

        cout << "Enter Account Index (0-9): ";
        cin >> accIndex;

        if (accIndex < 0 || accIndex >= 10)
        {
            cout << "Invalid Account Index." << endl;
            continue;
        }

        switch (choice)
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                accounts[accIndex].depositMoney(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                accounts[accIndex].withdrawMoney(amount);
                break;
            case 3:
                accounts[accIndex].displayInfo();
                break;
            default:
                cout << "Invalid Choice." << endl;
        }
    }
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}