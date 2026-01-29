#include <bits/stdc++.h>
using namespace std;
struct Employee {
    int empId;
    string name;
    double basic;
    double hra;
    double da;
    double gross;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    struct Employee emp[n];
    for (int i = 0; i < n; i++) {
        cout << "Employee " << i + 1 << endl;
        cout << "Name: ";
        getline(cin, emp[i].name);
        cout << "Employee ID: ";
        cin >> emp[i].empId;
        cout << "Basic Salary: ";
        cin >> emp[i].basic;

        emp[i].hra = 0.2 * emp[i].basic;
        emp[i].da = 0.1 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        cout << endl;
    }

    int max = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].gross > emp[max].gross) {
            max = i;
        }
    }
    cout << "Highest Paid Employee: " << emp[max].name << " with Gross Salary: " << emp[max].gross << endl;

    cout << "Enter Employee ID or Name to search: ";
    string search;
    getline(cin, search);

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (to_string(emp[i].empId) == search || emp[i].name == search) {
            cout << "Employee Found: " << emp[i].name << ", Basic Salary: " << emp[i].basic << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee not found." << endl;
    }
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}