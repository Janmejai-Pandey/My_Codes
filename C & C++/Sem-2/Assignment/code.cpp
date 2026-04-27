#include <bits/stdc++.h>
#include <ctime>
using namespace std;

// ================= Exception Handling =================
class ParkingException
{
public:
    string error;

    ParkingException(int type)
    {
        if (type == 1)
            error = "Error: No parking slot available for this vehicle type!";
        else if (type == 2)
            error = "Error: Invalid or already used ticket ID!";
        else
            error = "Unknown parking error!";
    }
};

// ================= Core Classes =================
enum class SlotSize
{
    SMALL,
    MEDIUM,
    LARGE
};

class Vehicle
{
public:
    string plateNumber;
    SlotSize requiredSize;

    Vehicle(string plate, SlotSize size)
    {
        plateNumber = plate;
        requiredSize = size;
    }
};

class ParkingSlot
{
    int slotId;
    SlotSize size;
    bool isOccupied;

public:
    ParkingSlot(int id, SlotSize s)
    {
        slotId = id;
        size = s;
        isOccupied = false;
    }

    int getId() { return slotId; }
    SlotSize getSize() { return size; }
    bool getOccupied() { return isOccupied; }
    void setOccupied(bool status) { isOccupied = status; }
};

class Ticket
{
public:
    string ticketId;
    string vehiclePlate;
    int slotId;
    time_t startTime;

    Ticket(string vPlate, int sId)
    {
        vehiclePlate = vPlate;
        slotId = sId;
        ticketId = "TKT-" + vehiclePlate + "-" + to_string(rand() % 1000);
        startTime = time(0);
    }
};

// ================= Templates =================
template <typename T>
bool how(const T &a, const T &b)
{
    return a.plateNumber < b.plateNumber;
}

template <typename T>
void sortRecords(list<T> &records)
{
    records.sort(how<T>);
}

template <typename T>
bool search(const list<T> &records, const string &plate)
{
    for (const auto &record : records)
    {
        if (record.plateNumber == plate)
            return true;
    }
    return false;
}

// ================= Parking System =================
class ParkingSystem
{
private:
    list<Vehicle> activeVehicles;
    vector<ParkingSlot> slots;
    queue<Vehicle> entryQueue;
    stack<string> recentExits;

    unordered_map<string, Ticket> activeTickets; // ⭐ ticketId → Ticket

public:
    string lastTicket; // ⭐ for testing

    ParkingSystem()
    {
        for (int i = 1; i <= 5; i++)
            slots.push_back(ParkingSlot(i, SlotSize::SMALL));
        for (int i = 6; i <= 8; i++)
            slots.push_back(ParkingSlot(i, SlotSize::MEDIUM));
        for (int i = 9; i <= 10; i++)
            slots.push_back(ParkingSlot(i, SlotSize::LARGE));
    }

    void addVehicleToQueue(Vehicle v)
    {
        cout << "Vehicle " << v.plateNumber << " added to queue.\n";
        entryQueue.push(v);
    }

    void processEntry()
    {
        if (entryQueue.empty())
            return;

        Vehicle v = entryQueue.front();
        entryQueue.pop();

        try
        {
            bool found = false;

            for (auto &slot : slots)
            {
                if (!slot.getOccupied() && slot.getSize() == v.requiredSize)
                {

                    slot.setOccupied(true);

                    // Creating ticket
                    Ticket t(v.plateNumber, slot.getId());
                    activeTickets[t.ticketId] = t;
                    lastTicket = t.ticketId;

                    activeVehicles.push_back(v);

                    cout << "Vehicle " << v.plateNumber
                         << " parked in slot " << slot.getId() << endl;

                    cout << "Ticket Issued: " << t.ticketId << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                throw ParkingException(1);
        }
        catch (const ParkingException &e)
        {
            cout << e.error << endl;
            throw;
        }
    }

    void processExit(string ticketId, int durationHours)
    {

        if (activeTickets.find(ticketId) == activeTickets.end())
        {
            throw ParkingException(2);
        }

        Ticket t = activeTickets[ticketId];

        auto vehicle = find_if(activeVehicles.begin(), activeVehicles.end(),
                               [&](const Vehicle &v)
                               {
                                   return v.plateNumber == t.vehiclePlate;
                               });

        // Billing
        int rate;
        if (vehicle->requiredSize == SlotSize::SMALL)
            rate = 20;
        else if (vehicle->requiredSize == SlotSize::MEDIUM)
            rate = 50;
        else
            rate = 100;

        int total = durationHours * rate;

        if (durationHours > 24)
        {
            total += 200;
            cout << "Fine Applied, Overstay detected.\n";
        }

        cout << "Vehicle " << t.vehiclePlate
             << " exiting. Total Bill: ₹" << total << endl;

        // Free slot
        for (auto &slot : slots)
        {
            if (slot.getId() == t.slotId)
            {
                slot.setOccupied(false);
                break;
            }
        }

        activeVehicles.erase(vehicle);
        activeTickets.erase(ticketId);
        recentExits.push(t.vehiclePlate);
    }

    void showRecentExits()
    {
        cout << "\n--- Recent Exits ---\n";
        while (!recentExits.empty())
        {
            cout << recentExits.top() << endl;
            recentExits.pop();
        }
    }
};

// ================= Main =================
int main()
{
    srand(time(0));

    ParkingSystem mallParking;

    Vehicle v1("ABC-123", SlotSize::SMALL);
    Vehicle v2("XYZ-789", SlotSize::LARGE);
    Vehicle v3("BIG-000", SlotSize::LARGE);
    Vehicle v4("SMALL-111", SlotSize::SMALL);

    mallParking.addVehicleToQueue(v1);
    mallParking.addVehicleToQueue(v2);
    mallParking.addVehicleToQueue(v3);
    mallParking.addVehicleToQueue(v4);

    cout << "\n--- Processing Entries ---\n";

    string t1, t2;

    mallParking.processEntry();
    t1 = mallParking.lastTicket;

    mallParking.processEntry();
    t2 = mallParking.lastTicket;

    mallParking.processEntry();
    mallParking.processEntry(); // may throw

    cout << "\n--- Processing Exits ---\n";

    try
    {
        mallParking.processExit(t1, 5);        // valid
        mallParking.processExit("INVALID", 1); // invalid
    }
    catch (const ParkingException &e)
    {
        cout << "Caught in Main: " << e.error << endl;
    }

    mallParking.showRecentExits();

    return 0;
}