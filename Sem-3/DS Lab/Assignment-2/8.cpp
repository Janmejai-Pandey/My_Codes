#include <iostream>
using namespace std;

struct Node {
    int coefficient;
    int power;
    Node* next;

    Node(int c, int p) {
        coefficient = c;
        power = p;
        next = nullptr;
    }
};

void insertTerm(Node*& head, int coefficient, int power) {
    if (coefficient == 0)
        return;

    Node* newNode = new Node(coefficient, power);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    if (power > head->power) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr && current->power > power) {
        previous = current;
        current = current->next;
    }

    if (current != nullptr && current->power == power) {
        current->coefficient += coefficient;

        delete newNode;

        if (current->coefficient == 0) {
            if (previous == nullptr)
                head = current->next;
            else
                previous->next = current->next;

            delete current;
        }

        return;
    }

    newNode->next = current;

    if (previous != nullptr)
        previous->next = newNode;
}

void printPolynomial(Node* head) {
    if (head == nullptr) {
        cout << "0" << endl;
        return;
    }

    bool first = true;

    while (head != nullptr) {
        if (head->coefficient != 0) {

            if (!first) {
                if (head->coefficient > 0)
                    cout << "+";
            }

            if (head->power == 0) {
                cout << head->coefficient;
            }
            else {
                if (head->coefficient == -1)
                    cout << "-";
                else if (head->coefficient != 1)
                    cout << head->coefficient;

                cout << "x";

                if (head->power != 1)
                    cout << "^" << head->power;
            }

            first = false;
        }

        head = head->next;
    }

    if (first)
        cout << "0";

    cout << endl;
}

void multiplyPolynomial(Node* p1, Node* p2, Node*& result) {
    Node* temp1 = p1;

    while (temp1 != nullptr) {
        Node* temp2 = p2;

        while (temp2 != nullptr) {
            int coefficient =
                temp1->coefficient * temp2->coefficient;

            int power =
                temp1->power + temp2->power;

            insertTerm(result, coefficient, power);

            temp2 = temp2->next;
        }

        temp1 = temp1->next;
    }
}

void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* poly1 = nullptr;
    Node* poly2 = nullptr;
    Node* result = nullptr;

    int n1, n2;

    cout << "Enter number of terms in first polynomial: ";
    cin >> n1;

    cout << "Enter coefficient and power:" << endl;

    for (int i = 0; i < n1; i++) {
        int coefficient, power;
        cin >> coefficient >> power;
        insertTerm(poly1, coefficient, power);
    }

    cout << "Enter number of terms in second polynomial: ";
    cin >> n2;

    cout << "Enter coefficient and power:" << endl;

    for (int i = 0; i < n2; i++) {
        int coefficient, power;
        cin >> coefficient >> power;
        insertTerm(poly2, coefficient, power);
    }

    cout << "\nFirst polynomial: ";
    printPolynomial(poly1);

    cout << "Second polynomial: ";
    printPolynomial(poly2);

    multiplyPolynomial(poly1, poly2, result);

    cout << "Result: ";
    printPolynomial(result);
    
    deleteList(poly1);
    deleteList(poly2);
    deleteList(result);

    cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;

    return 0;
}