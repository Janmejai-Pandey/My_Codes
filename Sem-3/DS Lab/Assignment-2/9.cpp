#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
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
}

void printList(Node* head) {
    cout << "{";

    while (head != nullptr) {
        cout << head->data;

        if (head->next != nullptr)
            cout << ", ";

        head = head->next;
    }

    cout << "}" << endl;
}

void rotateLeft(Node*& head, int k) {
    if (head == nullptr || head->next == nullptr || k <= 0)
        return;

    int count = 1;
    Node* tail = head;

    while (tail->next != nullptr) {
        tail = tail->next;
        count++;
    }

    k = k % count;

    if (k == 0)
        return;

    Node* current = head;

    for (int i = 1; i < k; i++)
        current = current->next;

    Node* newHead = current->next;

    current->next = nullptr;
    tail->next = head;

    head = newHead;
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

    int k;

    cout << "Enter K: ";
    cin >> k;

    cout << "\nOriginal list: ";
    printList(head);

    rotateLeft(head, k);

    cout << "After left rotation by " << k << " positions: ";
    printList(head);
    
    deleteList(head);

    cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;

    return 0;
}