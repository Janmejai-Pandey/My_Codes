#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw "Error: Division by zero!";

        cout << "Result = " << a / b << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}