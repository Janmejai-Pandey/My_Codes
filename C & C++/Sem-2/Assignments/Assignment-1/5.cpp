#include <iostream>
#include <string>
using namespace std;
struct Laptop {
    string brand;
    int RAM;
    double price;
};

int main() {
    Laptop myLaptop = {"Dell", 8, 2500};
    Laptop* ptr = &myLaptop;

    cout << "Original Laptop Details:" << endl;
    cout << "Brand: " << ptr->brand << endl;
    cout << "RAM: " << ptr->RAM << " GB" << endl;
    cout << "Price: Rs." << ptr->price << endl;

    ptr->RAM = 16;
    ptr->price = 3500;

    cout << endl;

    cout << "Updated Laptop Details:" << endl;
    cout << "Brand: " << ptr->brand << endl;
    cout << "RAM: " << ptr->RAM << " GB" << endl;
    cout << "Price: Rs." << ptr->price << endl;

    cout << "Janmejai Pandey - 2501030199 - B4"<< endl;
    return 0;
}