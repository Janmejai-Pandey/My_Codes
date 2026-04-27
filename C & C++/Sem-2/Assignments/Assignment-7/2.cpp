#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() {
        return 0.0;
    }
};

class FullTimeEmployee : public Employee {
private:
    double monthlySalary;
public:
    FullTimeEmployee(double salary) : monthlySalary(salary) {}
    double calculateSalary() {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;
public:
    PartTimeEmployee(int hours, double rate) : hoursWorked(hours), hourlyRate(rate) {}
    double calculateSalary() {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    Employee* emp1 = new FullTimeEmployee(50000);
    Employee* emp2 = new PartTimeEmployee(20, 1500);

    cout << "Full Time Employee Salary: Rs." << emp1->calculateSalary() << endl;
    cout << "Part Time Employee Salary: Rs." << emp2->calculateSalary() << endl;

    delete emp1;
    delete emp2;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}