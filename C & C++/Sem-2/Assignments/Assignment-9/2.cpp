#include <iostream>
using namespace std;

int main() {
    int num;
    char ch;

    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter a character: ";
    cin >> ch;

    try {
        if (num < 0)
            throw "Negative number not allowed!";

        if (!isalpha(ch))
            throw "Character is not an alphabet!";

        cout << "Valid inputs!" << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}