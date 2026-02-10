#include <iostream>
using namespace std;

class Battery
{
private:
    int level;
public:
    Battery(int l): level(l) {};
    ~Battery(){};

    void operator++() {
        if (level < 100) {
            level = min(level + 5, 100);
        }
    }

    void operator++(int) {
        Battery temp = *this;
        if (level < 100) {
            level = min(level + 5, 100);
        }
    }

    void operator--() {
        if (level > 0) {
            level = max(level - 5, 0);
        }
    }

    void operator--(int) {
        Battery temp = *this;
        if (level > 0) {
            level = max(level - 5, 0);
        }
    }

    void display() {
        cout << "Battery Level: " << level << "%" << endl;
    }
};

int main() {
    Battery battery(50);
    cout << "Initial ";
    battery.display();

    cout << "Charging (prefix)..." << endl;
    ++battery;
    battery.display();

    cout << "Charging (postfix)..." << endl;
    battery++;
    battery.display();

    cout << "Discharging (prefix)..." << endl;
    --battery;
    battery.display();

    cout << "Discharging (postfix)..." << endl;
    battery--;
    battery.display();
    
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}