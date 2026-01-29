#include <bits/stdc++.h>
using namespace std;
struct Book
{
    long bookID;
    string title;
    double price;
};

int partition(Book books[], int start, int end) {
    double pivot = books[end].price;
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (books[j].price < pivot) {
            i++;
            swap(books[i], books[j]);
        }
    }
    swap(books[i + 1], books[end]);
    return i + 1;
}

void sorts(Book books[], int start, int end) {
    if (start < end) {
        int pivot = partition(books, start, end);

        sorts(books, start, pivot - 1);
        sorts(books, pivot + 1, end);
    }
}


int main() {
    int n;
    cout << "Enter value of n - ";
    cin >> n;

    struct Book books[n];
    cout << "Enter details of " << n << "books - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Book " << i+1 << " - \n";
        cout << "Book Id - ";
        cin >> books[i].bookID;
        cout << "Title - ";
        cin.ignore();
        getline(cin,books[i].title);
        cout << "Price - ";
        cin >> books[i].price;
    }

    sorts(books, 0, n - 1);

    cout << "\nBooks sorted by price:\n";
    for (int i = 0; i < n; i++) {
        cout << books[i].bookID << "\t|" << books[i].title << "\t| " << books[i].price << endl;
    }
    cout << "Janmejai Pandey - 2501030199 - B4"<< endl;
    return 0;
}