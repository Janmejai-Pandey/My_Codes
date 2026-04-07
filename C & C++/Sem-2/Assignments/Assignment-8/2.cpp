#include <bits/stdc++.h>
using namespace std;

class Employee{
    char *myName_p;

    public:
    Employee(char *n){
        myName_p = n;
    };
    ~Employee(){
        delete myName_p;
    };
    
    void disp(){
        cout << "Employee name - " << myName_p;
    }
};

class Company{
    char *name_p;
    Employee *myEmp_p;

    public:
    Company(char *n, Employee *emp){
        name_p = n;
        myEmp_p = emp;
    };
    ~Company(){
        delete name_p;
        delete myEmp_p;
    };
};