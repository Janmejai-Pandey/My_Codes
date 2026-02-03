#include<iostream>
using namespace std;

class Payroll;

class Employee
{
private:
    int empID;
    double basicSalary;
public:
    Employee(){
        empID = 0;
        basicSalary = 0.0;
    }

    Employee(int id, double salary){
        empID = id;
        basicSalary = salary;
    }

    Employee(const Employee &emp){
        empID = emp.empID;
        basicSalary = emp.basicSalary;
    }

    ~Employee(){};

    friend void calculate(Payroll payroll, Employee emp);
};

class Payroll
{
private:
    double allowance;
    double deduction;
public:
    Payroll(double allow, double deduct):allowance(allow), deduction(deduct){};
    ~Payroll(){};

    friend void calculate(Payroll payroll, Employee emp);
};

void calculate(Payroll payroll, Employee emp) {
    double netSalary = emp.basicSalary + payroll.allowance - payroll.deduction;
    cout << "Employee ID: " << emp.empID << endl;
    cout << "Basic Salary: " << emp.basicSalary << endl;
    cout << "Allowance: " << payroll.allowance << endl;
    cout << "Deduction: " << payroll.deduction << endl;
    cout << "Net Salary: " << netSalary << endl;
}

int main()
{
    Employee emp1(101, 50000);
    Employee emp2 = emp1;
    Payroll payroll(5000, 2000);

    calculate(payroll, emp2);

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
