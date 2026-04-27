#include <iostream>
using namespace std;


int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;


    cout << "Enter index (0-4): ";
    cin >> index;


    try {
        if (index < 0 || index >= 5)
            throw "Index out of range!";


        cout << "Element = " << arr[index] << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}