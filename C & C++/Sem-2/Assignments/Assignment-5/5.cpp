#include <iostream>
using namespace std;

class Distance
{
private:
    int kilometers;
    int meters;
public:
    Distance(int km, int m): kilometers(km), meters(m) {
        kilometers += meters / 1000;
        meters = meters % 1000;
    }
    ~Distance(){};

    friend istream& operator>>(istream& in, Distance& d) {
        cout << "Enter distance (km m): ";
        in >> d.kilometers >> d.meters;
        d.kilometers += d.meters / 1000;
        d.meters = d.meters % 1000;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Distance& d) {
        out << "Distance: " << d.kilometers << " km and " << d.meters << " m";
        return out;
    }
};

int main() {
    Distance d1(0, 0);

    cin >> d1;

    cout << d1 << endl;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}