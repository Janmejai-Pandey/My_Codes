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

    Distance operator+(Distance& other) {
        int totalKilometers = kilometers + other.kilometers;
        int totalMeters = meters + other.meters;
        return Distance(totalKilometers, totalMeters);
    }

    Distance operator-(Distance& other) {
        int totalKilometers = kilometers - other.kilometers;
        int totalMeters = meters - other.meters;
        if (totalMeters < 0) {
            totalKilometers -= 1;
            totalMeters += 1000;
        }
        return Distance(totalKilometers, totalMeters);
    }

    void display() {
        cout << "Distance: " << kilometers << " km and " << meters << " m" << endl;
    }
};

int main() {
    Distance d1(2, 500);
    Distance d2(1, 750);

    cout << "Distance 1: ";
    d1.display();
    cout << "Distance 2: ";
    d2.display();

    Distance sum = d1 + d2;
    cout << "Sum of distances: ";
    sum.display();

    Distance difference = d1 - d2;
    cout << "Difference of distances: ";
    difference.display();

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
