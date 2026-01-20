// Write a C++ program to compute the area of a rectangle. Create a class named Area with 
// two member functions: 
// a. setDim() – to accept the length and breadth of the rectangle 
// b. getArea() – to return the area of the rectangle 
// Use a main() function to test the class.

#include <iostream>
using namespace std;

class Area {
    double length;
    double breadth;

    public:
    void setDim(double l, double b) {
        length = l;
        breadth = b;
    }

    double getArea() {
        return length * breadth;
    }
};

int main() {
    Area obj;
    cout << " Enter Length - ";
    double l;
    cin >> l;
    cout << " Enter Breath - ";
    double b;
    cin >> b;
    obj.setDim(l, b);
    double area = obj.getArea();

    cout << "Area  = " << area << endl;

    cout << "\nJanmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}