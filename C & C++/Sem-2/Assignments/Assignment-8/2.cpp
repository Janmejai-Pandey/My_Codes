#include <bits/stdc++.h>
using namespace std;

class Employee{
    char *myName_p;

    public:
    Employee(char *n){
        myName_p = n;
    };
    ~Employee(){};
    
    void disp(){
        
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
    ~Company(){};
};