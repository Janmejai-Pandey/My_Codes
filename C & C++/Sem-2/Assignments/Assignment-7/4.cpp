#include <iostream>
using namespace std;

class Device {
public:
    virtual void start() = 0;
    virtual void showStatus() {
        cout << "Device operating normally" << endl;
    }
};

class Printer : public Device {
public:
    void start() {
        cout << "Printer is printing documents" << endl;
    }
};

class AirConditioner : public Device {
public:
    void start() {
        cout << "Air conditioner cooling the room" << endl;
    }
};

void operateDevice(Device* device) {
    device->start();
    device->showStatus();
}

int main() {
    Device* printer = new Printer();
    Device* airConditioner = new AirConditioner();

    cout << "Operating Printer:" << endl;
    operateDevice(printer);

    cout << "\nOperating Air Conditioner:" << endl;
    operateDevice(airConditioner);

    delete printer;
    delete airConditioner;

    cout << "\nJanmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}