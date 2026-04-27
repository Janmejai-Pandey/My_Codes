#include <iostream>
using namespace std;

class Engine {
    int mPower;
public:
    Engine() { mPower = 0; }
    ~Engine() {}
};

class Car {
    int mColor;
    int mModel;
    Engine* mEngine;
public:
    Car() {
        mColor = 0;
        mModel = 0;
        mEngine = new Engine[1];
    }
    ~Car() {
        delete[] mEngine;
    }
};

int main() {
    Car c;
    return 0;
}