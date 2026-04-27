#include <iostream>
#include <cmath>
using namespace std;


double calculateSquareRoot(int n) {
    if (n < 0)
        throw "Negative number!";


    return sqrt(n);
}


int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;


    try {
        cout << "Square root = " << calculateSquareRoot(num) << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }


    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
