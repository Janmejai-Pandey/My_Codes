#include <iostream>
using namespace std;

class Temperature
{
private:
    double temp;
public:
    Temperature(double t): temp(t) {};
    ~Temperature(){};

    Temperature operator+() {
        int temp = this->temp;
        if (temp < 0) {
                temp = -temp;
        }
        return Temperature(temp);
    }

    void display() {
        cout << "Temperature: " << temp << " degrees" << endl;
    }
};

int main() {
    Temperature temp(-25);
    cout << "Original ";
    temp.display();

    Temperature modifiedTemp = +temp;
    cout << "Modified ";
    modifiedTemp.display();
    
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}