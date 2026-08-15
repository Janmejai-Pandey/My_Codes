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
    Node* newNode = new Node(coefficient, power);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

void printPolynomial(Node* head) {
    if (head == nullptr) {
        cout << "0" << endl;
        return;
    }

    while (head != nullptr) {
        if (head->coefficient != 0) {
            if (head != nullptr && head != nullptr) {
                if (head != nullptr) {
                    if (head->coefficient > 0)
                        cout << "+";
                }
            }

            cout << head->coefficient;

            if (head->power > 0)
                cout << "x";

            if (head->power > 1)
                cout << "^" << head->power;
        }

        head = head->next;
    }

    cout << endl;
}

void addPolynomial(Node* p1, Node* p2, Node*& result) {
    while (p1 != nullptr && p2 != nullptr) {

        if (p1->power == p2->power) {
            int sum = p1->coefficient + p2->coefficient;

            if (sum != 0)
                insertTerm(result, sum, p1->power);

            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->power > p2->power) {
            insertTerm(result, p1->coefficient, p1->power);
            p1 = p1->next;
        }
        else {
            insertTerm(result, p2->coefficient, p2->power);
            p2 = p2->next;
        }
    }

    while (p1 != nullptr) {
        insertTerm(result, p1->coefficient, p1->power);
        p1 = p1->next;
    }

    while (p2 != nullptr) {
        insertTerm(result, p2->coefficient, p2->power);
        p2 = p2->next;
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

    addPolynomial(poly1, poly2, result);

    cout << "Result: ";
    printPolynomial(result);
    
    deleteList(poly1);
    deleteList(poly2);
    deleteList(result);
    
    cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;

    return 0;
}