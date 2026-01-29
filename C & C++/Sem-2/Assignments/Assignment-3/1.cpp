#include <iostream>
using namespace std;

class ElectricityBill {
    string name;
    int ID;
    double units;
    double price;
    double totalBill;

public:
    void get() {
        cout << "Enter Customer Name: ";
        cin >> name;
        cout << "Enter Customer ID: ";
        cin >> ID;
        cout << "Enter Electricity Units Consumed: ";
        cin >> units;
        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void calc_bill() {
        totalBill = units * price;
    }

    void put() {
        cout << endl;
        cout << "Electricity Bill Details:" << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Customer ID: " << ID << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Price per Unit: Rs." << price << endl;
        cout << "Total Bill: Rs." << totalBill << endl;
    }
};

int main() {
    ElectricityBill bill;
    bill.get();
    bill.calc_bill();
    bill.put();
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
