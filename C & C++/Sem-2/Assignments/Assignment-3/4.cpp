#include <iostream>
using namespace std;

class Wall {
    double length;
    double height;
public:
    Wall(double len, double hgt) {
        length = len;
        height = hgt;
    }
    
    Wall(const Wall &w) {
        length = w.length;
        height = w.height;
    }
    
    double area() {
        return length * height;
    }
};

int main() {
    double len, hgt;
    cout << "Enter length and height of the wall - ";
    cin >> len >> hgt;

    Wall wall1(len, hgt);
    Wall wall2 = wall1;

    cout << "Area of wall1 - " << wall1.area() << endl;
    cout << "Area of wall2 - " << wall2.area() << endl;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}