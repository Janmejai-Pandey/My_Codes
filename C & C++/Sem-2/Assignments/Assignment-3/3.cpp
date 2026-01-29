#include <iostream>
#include <string>
using namespace std;
class Student {
    int enrolmentNumber;
    string name;
    string branch;
    double cgpa;
public:
    
    Student(int enrolNo, string studentName, string studentBranch, double studentCgpa) {
        enrolmentNumber = enrolNo;
        name = studentName;
        branch = studentBranch;
        cgpa = studentCgpa;
    }
    
    Student(int enrolNo, string studentName, double studentCgpa) {
        enrolmentNumber = enrolNo;
        name = studentName;
        branch = "CSE";
        cgpa = studentCgpa;
    }
    
    Student() {
        enrolmentNumber = 1;
        name = "Unknown";
        branch = "CSE";
        cgpa = 6.0;
    }
    void setEnrolmentNumber(int enrolNo) {
        enrolmentNumber = enrolNo;
    }

    int getEnrolmentNumber() {
        return enrolmentNumber;
    }

    void setName(string studentName) {
        name = studentName;
    }

    string getName() {
        return name;
    }

    void setBranch(string studentBranch) {
        branch = studentBranch;
    }

    string getBranch() {
        return branch;
    }

    void setCgpa(double studentCgpa) {
        cgpa = studentCgpa;
    }

    double getCgpa() {
        return cgpa;
    }

    void displayDetails() {
        cout << "Enrolment Number: " << enrolmentNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student student1(30199, "Janmejai Pandey", "CSE", 8.5);
    Student student2(30200, "Aarav Sharma", 9.0);
    Student student3;

    student2.setCgpa(9.2);

    cout << "Updated CGPA of Student 2: " << student2.getCgpa() << endl;

    cout << "\nStudent 1 Details:" << endl;
    student1.displayDetails();

    cout << "\nStudent 2 Details:" << endl;
    student2.displayDetails();

    cout << "\nStudent 3 Details:" << endl;
    student3.displayDetails();

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}