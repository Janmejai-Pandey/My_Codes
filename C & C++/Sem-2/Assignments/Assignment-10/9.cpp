#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> Students;
    
    Students[200] = "Alice";
    Students[201] = "John";
    
    cout << "Size of the map Students: " << Students.size() << endl;

    if (Students.find(201) != Students.end()) {
        cout << "Value for key 201: " << Students[201] << endl;
    } else {
        cout << "Key 201 not found in the map." << endl;
    }
    
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    
    return 0;
}