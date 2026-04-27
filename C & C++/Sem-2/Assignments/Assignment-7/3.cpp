#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}