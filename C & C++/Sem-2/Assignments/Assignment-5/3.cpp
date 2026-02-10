#include <iostream>
using namespace std;

class Book
{
private:
    string isbn;
    string title;
    double price;
    bool available;
public:
    Book(string i, string t, double p, bool a): isbn(i), title(t), price(p), available(a) {};
    ~Book(){};

    bool operator==(const Book& other) {
        return isbn == other.isbn;
    }

    bool operator<(const Book& other) {
        return price < other.price;
    }

    bool operator!() {
        return !available;
    }

    void display() {
        cout << "ISBN: " << isbn << ", Title: " << title << ", Price: $" << price << ", Availability: " << (available ? "Available" : "Not Available") << endl;
    }

    string getISBN() const { return isbn; }
    string getTitle() const { return title; }
    double getPrice() const { return price; }
    bool isAvailable() const { return available; }
};

int main() {
    Book book1("12345", "C++ Programming", 29.99, true);
    Book book2("67890", "Data Structures", 39.99, false);
    Book book3("12345", "C++ Programming", 29.99, true);

    book1.display();
    book2.display();
    book3.display();

    cout << "Checking for duplicate ISBN..." << endl;
    if (book1 == book3) {
        cout << "Duplicate ISBN found: " << book1.getISBN() << endl;
    } else {
        cout << "No duplicate ISBN found." << endl;
    }

    cout << "Comparing prices..." << endl;
    if (book1 < book2) {
        cout << book1.getTitle() << " is cheaper than " << book2.getTitle() << endl;
    } else {
        cout << book1.getTitle() << " is not cheaper than " << book2.getTitle() << endl;
    }

    cout << "Checking availability..." << endl;
    if (!book1) {
        cout << book1.getTitle() << " is not available in the store." << endl;
    } else {
        cout << book1.getTitle() << " is available in the store." << endl;
    }

    if (!book2) {
        cout << book2.getTitle() << " is not available in the store." << endl;
    } else {
        cout << book2.getTitle() << " is available in the store." << endl;
    }

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}