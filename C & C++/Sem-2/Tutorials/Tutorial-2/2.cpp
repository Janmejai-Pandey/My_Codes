#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int* marks = new int[n];

    cout << "Enter marks for " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "Marks of students:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    int pos, newMark;
    cout << "Enter position to insert new mark (1 to " << n + 1 << "): ";
    cin >> pos;
    cout << "Enter new mark: ";
    cin >> newMark;

    n++;
    int* newMarks = new int[n];

    for (int i = 0, j = 0; i < n; i++) {
        if (i == pos - 1) {
            newMarks[i] = newMark;
        } else {
            newMarks[i] = marks[j++];
        }
    }

    delete[] marks;
    marks = newMarks;

    cout << "Updated marks after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;
    }

    cout << "Enter position to delete mark (1 to " << n << "): ";
    cin >> pos;

    newMarks = new int[n - 1];

    for (int i = 0, j = 0; i < n; i++) {
        if (i != pos - 1) {
            newMarks[j++] = marks[i];
        }
    }
    n--;

    delete[] marks;
    marks = newMarks;

    cout << "Updated marks after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;
    }

    delete[] marks;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}