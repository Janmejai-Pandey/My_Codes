// Problem Statement: “Smart Parking Management System”
// A system designed to manage parking slots in malls, offices, or airports.
// Key Features:
//  Vehicle entry/exit tracking
//  Slot allocation (small, medium, large vehicles)
//  Real-time availability display
//  Billing based on parking duration

// Tasks:
// A. UML Class Diagram
//  Design at least five classes: Vehicle, ParkingSlot, Ticket, ParkingSystem, Admin.
// Clearly differentiate access specifiers in your classes.
//  Draw the UML class diagram showing relationships such as inheritance,
// association, aggregation, and composition.

// B. Implementation
// 1. Use Linked Lists to maintain dynamic records of vehicles.
// 2. Use Stacks or Queues using STL for:
//  Queue → vehicles waiting for parking
//  Stack → recent exits
// 3. The system should include a generic template-based sorting and searching
// mechanism to efficiently manage and retrieve parking records such as vehicle
// numbers.
// C. Exception Handling and Analysis
//  No slot available
//  Invalid ticket
//  Overstay fine calculation
// Add meaningful error messages and ensure rethrowing and inheritance-
// based exceptions are demonstrated.
// Include comments in code to explain possible outcomes and logic used.
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string licensePlate;
    string type; // small, medium, large

    Vehicle(string plate, string t) : licensePlate(plate), type(t) {}
};

class ParkingSlot {
public:
    string slotType; // small, medium, large
    bool isOccupied;

    ParkingSlot(string type) : slotType(type), isOccupied(false) {}
};

class Ticket {
public:
    string licensePlate;
    string slotType;
    time_t entryTime;

    Ticket(string plate, string slot) : licensePlate(plate), slotType(slot) {
        entryTime = time(0);
    }
};

class ParkingSystem {
private:
    ParkingSlot* slots[10]; // Array of parking slots
    Ticket* tickets[10]; // Array of issued tickets
    int ticketCount;
public:
    ParkingSystem() : ticketCount(0) {
        // Initialize parking slots
        for (int i = 0; i < 10; i++) {
            if (i < 4) slots[i] = new ParkingSlot("small");
            else if (i < 7) slots[i] = new ParkingSlot("medium");
            else slots[i] = new ParkingSlot("large");
        }
    }

    void parkVehicle(Vehicle* vehicle) {
        for (int i = 0; i < 10; i++) {
            if (!slots[i]->isOccupied && slots[i]->slotType == vehicle->type) {
                slots[i]->isOccupied = true;
                tickets[ticketCount++] = new Ticket(vehicle->licensePlate, slots[i]->slotType);
                cout << "Vehicle parked in slot " << i + 1 << endl;
                return;
            }
        }
        throw "No slot available!";
    }

    void exitVehicle(string licensePlate) {
        for (int i = 0; i < ticketCount; i++) {
            if (tickets[i]->licensePlate == licensePlate) {
                time_t exitTime = time(0);
                double duration = difftime(exitTime, tickets[i]->entryTime) / 60; // Duration in minutes
                double fee = calculateFee(duration, tickets[i]->slotType);
                cout << "Vehicle exited. Parking fee: $" << fee << endl;
                delete tickets[i];
                return;
            }
        }
        throw "Invalid ticket!";
    }

    double calculateFee(double duration, string slotType) {
        double rate = 0;
        if (slotType == "small") rate = 1.0;
        else if (slotType == "medium") rate = 1.5;
        else if (slotType == "large") rate = 2.0;

        if (duration > 120) { // Overstay fine
            return rate * duration + 20; // Base fee + fine
        }
        return rate * duration;
    }

    ~ParkingSystem() {
        for (int i = 0; i < 10; i++) {
            delete slots[i];
        }
        for (int i = 0; i < ticketCount; i++) {
            delete tickets[i];
        }
    }
};

int main() {
    ParkingSystem system;
    Vehicle* v1 = new Vehicle("ABC123", "small");
    Vehicle* v2 = new Vehicle("XYZ789", "medium");

    try {
        system.parkVehicle(v1);
        system.parkVehicle(v2);
        system.exitVehicle("ABC123");
        system.exitVehicle("XYZ789");
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    delete v1;
    delete v2;
    return 0;
}