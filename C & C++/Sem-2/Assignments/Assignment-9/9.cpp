#include <iostream>
using namespace std;


int main() {
    string password = "pass";
    string inputPass;
    double balance = 1000, withdraw;
    int log[3], index = 0;


    try {
        try {
            cout << "Enter password: ";
            cin >> inputPass;


            if (inputPass != password)
                throw "Wrong password!";
        }
        catch (const char* msg) {
            cout << msg << endl;
        }


        try {
            cout << "Enter amount: ";
            cin >> withdraw;


            if (withdraw < 0)
                throw "Negative amount!";


            if (withdraw > balance)
                throw "Insufficient balance!";


            balance -= withdraw;
        }
        catch (const char* msg) {
            cout << msg << endl;
        }


        try {
            if (index >= 3)
                throw "Log overflow!";


            log[index++] = withdraw;
            cout << "Transaction stored!" << endl;
        }
        catch (const char* msg) {
            cout << msg << endl;
        }


    }
    catch (...) {
        cout << "Transaction failed!" << endl;
    }


    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
