#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result;
    for (char ch : input) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;
        }
    }
    input = result;

    cout << "String after removing vowels: " << input << endl;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}