#include <iostream>
using namespace std;


class InvalidAgeException {};


int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;


    try {
        if (age < 18)
            throw InvalidAgeException();


        cout << "Eligible to vote!" << endl;
    }
    catch (InvalidAgeException) {
        cout << "Not eligible for voting!" << endl;
    }


    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
