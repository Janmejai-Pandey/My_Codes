#include <iostream>
using namespace std;


int main() {
    string username, password;


    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;


    try {
        if (username.empty())
            throw "Username cannot be empty!";


        if (password != "1234")
            throw "Invalid credentials!";


        cout << "Login successful!" << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }


    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
