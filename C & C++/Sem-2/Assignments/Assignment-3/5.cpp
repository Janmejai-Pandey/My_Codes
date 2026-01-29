#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *s;
    int size;
public:
    String(const char *str) {
        size = strlen(str);
        s = new char[size + 1];
        strcpy(s, str);
    }
    
    String(const String &strObj) {
        size = strObj.size;
        s = new char[size + 1];
        strcpy(s, strObj.s);
    }
    
    ~String() {
        delete[] s;
    }
    
    void display() {
        cout << "String: " << s << ", Size: " << size << endl;
    }
};

int main() {
    String str1("Hello, World!");
    str1.display();

    String str2 = str1;
    str2.display();

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}