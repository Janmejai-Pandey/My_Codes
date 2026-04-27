#include <bits/stdc++.h>
using namespace std;

class Person
{
    long aadhaarNo;
protected:
    int age;
public:
    string name;

    void setPersonDetails(string n, int a, long long aadhaar){
        name = n;
        age = a;
        aadhaarNo = aadhaar;
    }
    void displayPersonDetails(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Aadhaar Number: " << aadhaarNo << endl;
        cout << endl;
    }
};

class Student : public Person {
public:
    int rollNo;
    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        // cout << "Aadhaar Number: " << aadhaarNo;
        // It's a private member of the base class 
        cout << endl;
    }
};

class GraduateStudent : public Student {
    public:
    string researchTopic;
    void displayGraduateDetails(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Research Topic: " << researchTopic << endl;
        cout << endl;
    }
};

class Employee : public Person {
    public:
    int employeeId;
    void displayEmployeeDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << endl;
    }
};

int main() {
    Student student;
    student.setPersonDetails("Alice", 20, 123456789012);
    student.rollNo = 101;
    student.displayStudentDetails();

    GraduateStudent gradStudent;
    gradStudent.setPersonDetails("Bob", 25, 987654321012);
    gradStudent.rollNo = 202;
    gradStudent.researchTopic = "Artificial Intelligence";
    gradStudent.displayGraduateDetails();

    Employee employee;
    employee.setPersonDetails("Charlie", 30, 112233445566);
    employee.employeeId = 303;
    employee.displayEmployeeDetails();

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}