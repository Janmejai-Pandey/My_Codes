#include <iostream>
using namespace std;
class Second {
    int personId;
public:
    Second() {
        personId = 0;
        cout << "Default Constructor called. Person ID: " << personId << endl;
    }
    Second(int id) {
        personId = id;
        cout << "Parameterized Constructor called. Person ID: " << personId << endl;
    }
};

int main() {
    Second obj1;
    Second obj2(199);
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}