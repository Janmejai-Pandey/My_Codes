#include <iostream>
#include <cstring>
using namespace std;

class Wheel {};
class Vehicle{
    int Wheelbase;
    int MaxPower;
    Wheel* wheels[4];

protected:
    int seat;

public:
    void PressAccelerator(){
        cout<<"Accelerating..."<<endl;
    }

    void TurnWheel(){
        cout<<"Turning..."<<endl;
    }

    void pressBrake(){
        cout<<"Braking..."<<endl;
    }
};


class Car : public Vehicle {};

class Tachograph {};

class Lorry : public Vehicle {
    Tachograph* t;
};

class Person {
    Vehicle** v;

public:
    Person(int n){
        v = new Vehicle*[n];   
    }
    \
    ~Person(){
        delete[] v;
    }

    void addVehicle(int n){
        v[n] = new Vehicle();
    }
};

int main() {
    return 0;
}