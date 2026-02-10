#include <iostream>
using namespace std;

class Text
{
private:
    string text;
public:
    Text(string t): text(t) {};
    ~Text(){};

    Text operator+(const Text& other) {
        return Text(text + other.text);
    }

    Text operator-(const Text& other) {
        string result;
        int pos = 0;
        while (pos < text.length()) {
            int found = text.find(other.text, pos);
            if (found == string::npos) {
                result += text.substr(pos);
                break;
            }
            result += text.substr(pos, found - pos);
            pos = found + other.text.length();
        }
        return Text(result);
    }

    void display() {
        cout << text << endl;
    }
};

int main() {
    Text t1("hello world world");
    Text t2("world");
    Text t3("!");

    // Concatenation
    Text concat = t1 + t3;

    // Subtraction (remove substring)
    Text removed = t1 - t2;

    cout << "After concatenation: ";
    concat.display();
    cout << "After subtraction: ";
    removed.display();

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}