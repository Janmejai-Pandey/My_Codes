#include <iostream>
using namespace std;

class Vector {
    int size;
    float* element;

public:
    Vector(int s) {
        size = s;
        element = new float[size];
    }

    ~Vector() {
        delete []element;
    }

    void get() {
        for (int i = 0; i < size; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> element[i]; 
        }
    }

    void add(float k) {
        for (int i = 0; i < size; i++) {
            element[i] += k;
        }
    }

    void multiply(float k) {
        for (int i = 0; i < size; i++) {
            element[i] *= k;
        }
    }

    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            if (i != 0) cout << ", ";
            cout << element[i];
        }
        cout << ")" << endl;
    }
};

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    Vector v(n);
    v.get();

    cout << "Original vector: ";
    v.display();

    float add, mul;
    cout << "Enter value to add to each element: ";
    cin >> add;
    v.add(add);
    cout << "After addition: ";
    v.display();

    cout << "Enter value to multiply with each element: ";
    cin >> mul;
    v.multiply(mul);
    cout << "After multiplication: ";
    v.display();

    cout << "\nJanmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}