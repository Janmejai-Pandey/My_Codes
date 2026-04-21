#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
    
    T subtract(T a, T b) {
        return a - b;
    }
    
    T multiply(T a, T b) {
        return a * b;
    }
    
    T divide(T a, T b) {
        if (b == 0) {
            throw "Division by zero!";
        }
        return a / b;
    }
};

int main() {
    Calculator<double> calc;
    cout << "5.5 + 3.2 = " << calc.add(5.5, 3.2) << endl;
    cout << "5.5 - 3.2 = " << calc.subtract(5.5, 3.2) << endl;
    cout << "5.5 * 3.2 = " << calc.multiply(5.5, 3.2) << endl;
    cout << "5.5 / 3.2 = " << calc.divide(5.5, 3.2) << endl;
    cout << "10 / 0 = ";
    try {
        cout << calc.divide(10, 0) << endl;
    } catch (const char* e) {
        cout << e << endl;
    }
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}