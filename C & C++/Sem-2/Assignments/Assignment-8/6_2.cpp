#include <iostream>
using namespace std;

class CPU {
    double clock_speed;
public:
    CPU() {
        clock_speed = 0;
    }

    CPU(double cs) {
        clock_speed = cs;
    }

    double getClockspeed() {
        return clock_speed;
    }

    void setClockspeed(double cs) {
        clock_speed = cs;
    }
};

class Computer {
    CPU *processor;
public:
    Computer() {}

    Computer(CPU c) {
        processor = new CPU(c);
    }

    CPU getCpu() {
        return *processor;
    }

    void setCpu(CPU c) {
        *processor = c;
    }
};

class PC : public Computer {
    string pcname;
public:
    PC(string name, CPU c) : Computer(c) {
        pcname = name;
    }

    void display() {
        cout << "PC Name: " << pcname << endl;
        cout << "Clock Speed: " << getCpu().getClockspeed() << endl;
    }
};

int main() {
    CPU c1(3.5);
    PC pc("MyPC", c1);
    pc.display();
    return 0;
}