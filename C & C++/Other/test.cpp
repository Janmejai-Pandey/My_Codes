#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Course;      // forward declaration
class Department;  // forward declaration

//-------------------- Student --------------------
class Student {
    string name_;
    vector<Course*> courses_;   // non-owning links

public:
    Student(const string& name) : name_(name) {}

    string getName() const {
        return name_;
    }

    void addCourse(Course* c) {
        courses_.push_back(c);
    }

    void showDepartments() const;
};

//-------------------- Department --------------------
class Department {
    string name_;
    vector<Course*> courses_;   // non-owning links

public:
    Department(const string& name) : name_(name) {}

    string getName() const {
        return name_;
    }

    void addCourse(Course* c) {
        courses_.push_back(c);
    }

    void showStudents() const;
};

//-------------------- Association Class: Course --------------------
class Course {
    Student* student_;         // associated student
    Department* department_;   // associated department
    string courseName_;

public:
    Course(Student* s, Department* d, const string& cname)
        : student_(s), department_(d), courseName_(cname) {
        student_->addCourse(this);
        department_->addCourse(this);
    }

    Student* getStudent() const {
        return student_;
    }

    Department* getDepartment() const {
        return department_;
    }

    string getCourseName() const {
        return courseName_;
    }
};

//-------------------- Member Function Definitions --------------------
void Student::showDepartments() const {
    cout << "Student: " << name_ << "\nAssociated Departments:\n";
    for (auto c : courses_) {
        cout << "  " << c->getDepartment()->getName()
             << " through course: " << c->getCourseName() << endl;
    }
}

void Department::showStudents() const {
    cout << "Department: " << name_ << "\nAssociated Students:\n";
    for (auto c : courses_) {
        cout << "  " << c->getStudent()->getName()
             << " through course: " << c->getCourseName() << endl;
    }
}

//-------------------- Main --------------------
int main() {
    Student s1("Amit");
    Student s2("Riya");

    Department d1("Computer Science");
    Department d2("Mathematics");

    // many-to-many associations
    Course c1(&s1, &d1, "Data Structures");
    Course c2(&s1, &d2, "Statistics");
    Course c3(&s2, &d1, "Operating Systems");

    cout << "\n";
    s1.showDepartments();

    cout << "\n";
    d1.showStudents();

    return 0;
}