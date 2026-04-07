#include <iostream>
#include <cstring>
using namespace std;

// ==================== Student Class ====================
class Student {
private:
    char* name_p;

public:
    // Constructor
    Student() {
        name_p = nullptr;
        cout << "Student Constructor called" << endl;
    }

    Student(const char* name) {
        name_p = new char[strlen(name) + 1];
        strcpy(name_p, name);
        cout << "Student Created: " << name_p << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student Destructor called for: " 
             << (name_p ? name_p : "NULL") << endl;
        delete[] name_p;
        name_p = nullptr;
    }

    // Get Student Name
    const char* sName() const {
        return name_p;
    }
};

// ==================== Department Class ====================
class Department {
private:
    char* name_p;

public:
    // Constructor
    Department() {
        name_p = nullptr;
        cout << "Department Constructor called" << endl;
    }

    Department(const char* name) {
        name_p = new char[strlen(name) + 1];
        strcpy(name_p, name);
        cout << "Department Created: " << name_p << endl;
    }

    // Destructor
    ~Department() {
        cout << "Department Destructor called for: " 
             << (name_p ? name_p : "NULL") << endl;
        delete[] name_p;
        name_p = nullptr;
    }

    // Get Department Name
    const char* dName() const {
        return name_p;
    }
};

// ==================== Course Class ====================
class Course {
private:
    Student*     std_p;        // Association with Student (0..*)
    Department*  dept_p;       // Association with Department (0..*)
    char*        courseName_p; // Course name

    static unsigned int index;         // Static index counter
    static Course*      courseList_p;  // Static list of courses

public:
    // Constructor
    Course() : std_p(nullptr), dept_p(nullptr), courseName_p(nullptr) {
        cout << "Course Constructor called" << endl;
    }

    Course(Student* student, Department* department, const char* courseName) {
        // Association: Student and Department exist independently
        std_p  = student;
        dept_p = department;

        courseName_p = new char[strlen(courseName) + 1];
        strcpy(courseName_p, courseName);

        cout << "Course Created: " << courseName_p << endl;
    }

    // Destructor
    ~Course() {
        cout << "Course Destructor called for: " 
             << (courseName_p ? courseName_p : "NULL") << endl;

        // NOTE: We do NOT delete std_p or dept_p
        // because both have independent lifecycles (Association)
        delete[] courseName_p;
        courseName_p = nullptr;

        std_p  = nullptr;  // Just nullify the pointer, not delete
        dept_p = nullptr;
    }

    // Display Course Details
    void displayCourse() const {
        cout << "\n====== Course Details ======" << endl;
        cout << "Course Name : " 
             << (courseName_p ? courseName_p : "N/A") << endl;
        cout << "Student     : " 
             << (std_p  ? std_p->sName()  : "N/A") << endl;
        cout << "Department  : " 
             << (dept_p ? dept_p->dName() : "N/A") << endl;
        cout << "============================" << endl;
    }
};

// ==================== Static Member Initialization ====================
unsigned int Course::index       = 0;
Course*      Course::courseList_p = nullptr;

// ==================== Main Function ====================
int main() {
    cout << "\n========== Creating Students ==========" << endl;
    Student s1("Alice");
    Student s2("Bob");

    cout << "\n========== Creating Departments ==========" << endl;
    Department d1("Computer Science");
    Department d2("Mathematics");

    cout << "\n========== Creating Courses ==========" << endl;
    // One student can associate with multiple departments
    Course c1(&s1, &d1, "Data Structures");
    Course c2(&s1, &d2, "Calculus");

    // Multiple students can associate with one department
    Course c3(&s2, &d1, "Algorithms");
    Course c4(&s2, &d2, "Linear Algebra");

    cout << "\n========== Displaying Course Info ==========" << endl;
    c1.displayCourse();
    c2.displayCourse();
    c3.displayCourse();
    c4.displayCourse();

    cout << "\n========== Program Ending (Destructors) ==========" << endl;
    return 0;
}