#include <iostream>
#include <cstring>
using namespace std;

class House;

class Room
{
    char *name;

public:
    Room(char *n = nullptr)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    ~Room()
    {
        delete[] name;
    }

    void display()
    {
        cout << "Room: " << name << endl;
    }
};

class House
{
    Room *rooms;
    int count;
    char *name;

public:
    House(char *n)
    {
        count = 0;
        rooms = nullptr;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    ~House()
    {
        delete[] rooms;
        delete[] name;
    }

    void addRoom(char *roomName)
    {
        Room *temp = new Room[count + 1];
        for (int i = 0; i < count; i++)
        {
            temp[i] = rooms[i];
        }

        temp[count] = Room(roomName);
        rooms = temp;
        count++;
        temp = nullptr;
    }

    void display()
    {
        cout << "House: " << name << endl;
        for (int i = 0; i < count; i++)
        {
            rooms[i].display();
        }
    }
};

int main()
{
    House h("MyHouse");
    h.addRoom("Living Room");
    h.addRoom("Bedroom");
    h.display();

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}