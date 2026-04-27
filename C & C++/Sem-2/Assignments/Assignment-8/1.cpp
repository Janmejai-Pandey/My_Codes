#include <iostream>
#include <cstring>
using namespace std;

class Department;

class Student
{
    char *name;

public:
    Student(const char *n)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    ~Student()
    {
        delete[] name;
    }
    char *getName()
    {
        return name;
    }
};

class Department
{
    char *name;

public:
    Department(const char *n)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    ~Department()
    {
        delete[] name;
    }
    char *getName()
    {
        return name;
    }
};

class Course
{
    Student *std_p;
    Department *dept_p;
    char *courseName;

public:
    Course(Student *s, Department *d, char *cname)
    {
        std_p = s;
        dept_p = d;
        courseName = new char[strlen(cname) + 1];
        strcpy(courseName, cname);
    }

    ~Course()
    {
        delete[] courseName;
    }

    void display()
    {
        cout << std_p->getName() << "\t" << dept_p->getName() << "\t" << courseName << endl;
    }
};

int main()
{
    Student s1("Janmejai");
    Student s2("Bhalla");

    Department d1("CSE");
    Department d2("Mathematics");

    Course c1(&s1, &d1, "DS");
    Course c2(&s1, &d2, "Stats");
    Course c3(&s2, &d1, "Algo");

    c1.display();
    c2.display();
    c3.display();

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}