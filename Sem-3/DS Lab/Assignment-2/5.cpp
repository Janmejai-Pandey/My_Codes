#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void printList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    cout << "{";

    while (head != nullptr) {
        cout << head->data;

        if (head->next != nullptr)
            cout << ", ";

        head = head->next;
    }

    cout << "}" << endl;
}

void divisibleBy(Node* head, int m) {
    if (m == 0) {
        cout << "Division by zero is not allowed." << endl;
        return;
    }

    bool found = false;

    cout << "Values divisible by " << m << ": ";

    while (head != nullptr) {
        if (head->data % m == 0) {
            cout << head->data << " ";
            found = true;
        }

        head = head->next;
    }

    if (!found)
        cout << "None";

    cout << endl;
}

void deleteGreaterThan(Node*& head, int x) {
    Node* current = head;

    while (current != nullptr) {
        Node* nextNode = current->next;

        if (current->data > x) {
            if (current->prev != nullptr)
                current->prev->next = current->next;
            else
                head = current->next;

            if (current->next != nullptr)
                current->next->prev = current->prev;

            delete current;
        }

        current = nextNode;
    }
}

void findBetweenDuplicates(Node* head, int value) {
    Node* first = nullptr;
    Node* second = nullptr;

    while (head != nullptr) {
        if (head->data == value) {
            if (first == nullptr)
                first = head;
            else {
                second = head;
                break;
            }
        }

        head = head->next;
    }

    if (first == nullptr || second == nullptr) {
        cout << "Duplicate value does not exist." << endl;
        return;
    }

    int count = 0;
    Node* temp = first->next;

    while (temp != second) {
        count++;
        temp = temp->next;
    }

    cout << "No. of elements between a pair of '"
         << value << "' = " << count << "." << endl;
}

void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertEnd(head, value);
    }

    cout << "\n(a) Doubly Linked List: ";
    printList(head);

    int m;

    cout << "\n(b) Enter m: ";
    cin >> m;

    divisibleBy(head, m);

    int x;

    cout << "\n(c) Enter x: ";
    cin >> x;

    deleteGreaterThan(head, x);

    cout << "List after deleting values greater than "
         << x << ": ";
    printList(head);

    int duplicate;

    cout << "\n(d) Enter duplicate element: ";
    cin >> duplicate;

    findBetweenDuplicates(head, duplicate);
    
    deleteList(head);
    
    cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;
    
    return 0;
}