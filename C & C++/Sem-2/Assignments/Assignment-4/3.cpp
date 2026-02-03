#include<bits/stdc++.h>
using namespace std;

class Employee
{
private:
    double basicSalary;
public:
    Employee(double salary):basicSalary(salary){};
    ~Employee(){};

    friend class Payroll;
};

class Payroll
{
private:
    double hraRate;
    double daRate;
    double pfRate;
public:
    Payroll(double hra, double da, double pf):hraRate(hra), daRate(da), pfRate(pf){};
    ~Payroll(){};

    double compute(Employee emp)
    {
        double hra = emp.basicSalary * hraRate / 100;
        double da = emp.basicSalary * daRate / 100;
        double pf = emp.basicSalary * pfRate / 100;
        double netSalary = emp.basicSalary + hra + da - pf;
        cout << "Basic Salary: " << emp.basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "PF: " << pf << endl;
        return netSalary;
    }
};

int main()
{
    Employee emp(50000);
    Payroll payroll(20, 10, 5);

    double netSalary = payroll.compute(emp);
    cout << "Net Salary: " << netSalary << endl;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}