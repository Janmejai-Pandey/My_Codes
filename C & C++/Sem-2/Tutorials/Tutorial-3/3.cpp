#include <bits/stdc++.h>
using namespace std;

class Library
{
private:
    int bookNo;
    string bookName;
    string Author;
    string Publisher;
    double price;
    int noOfCopiesIssued;
    int noOfCopies;
public:
    void get()
    {
        cout << "Enter Book Number: ";
        cin >> bookNo;
        cout << "Enter Book Name: ";
        cin >> bookName;
        cout << "Enter Author Name: ";
        cin >> Author;
        cout << "Enter Publisher Name: ";
        cin >> Publisher;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number of Copies: ";
        cin >> noOfCopies;
        noOfCopiesIssued = 0;
    }

    void issueBook()
    {
        if (noOfCopiesIssued < noOfCopies)
        {
            noOfCopiesIssued++;
            cout << "Book Issued Successfully!" << endl;
        }
        else
        {
            cout << "No Copies Available!" << endl;
        }
    }

    void returnBook()
    {
        if (noOfCopiesIssued > 0)
        {
            noOfCopiesIssued--;
            cout << "Book Returned Successfully!" << endl;
        }
        else
        {
            cout << "No Copies Issued!" << endl;
        }
    }

    void displayInfo()
    {
        cout << "Book Number: " << bookNo << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << Author << endl;
        cout << "Publisher: " << Publisher << endl;
        cout << "Price: " << price << endl;
        cout << "Number of Copies Issued: " << noOfCopiesIssued << endl;
        cout << "Total Number of Copies: " << noOfCopies << endl;
    }
};

int main()
{
    Library book;
    book.get();
    book.displayInfo();
    book.issueBook();
    book.displayInfo();
    book.returnBook();
    book.displayInfo();

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}