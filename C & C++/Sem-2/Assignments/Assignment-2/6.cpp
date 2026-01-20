// Create a class named First with a data member string studentName and a member 
// function printName(). The program should create an object of the class and print the 
// student name using the member function. 
#include <iostream>
using namespace std;

class First {
    string studentName;

    public:
    First(string name) {
        studentName = name;
    }

    void printName() {
        cout << "Student Name: " << studentName << endl;
    }
};

int main() {
    First obj("Jan Kai");
    obj.printName();
    cout << "\nJanmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}