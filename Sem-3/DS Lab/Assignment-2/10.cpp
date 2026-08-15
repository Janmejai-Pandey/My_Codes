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

void insertSorted(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr || value < head->data) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr && temp->next->data < value)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
}

void removeDuplicates(Node* head) {
    while (head != nullptr && head->next != nullptr) {
        if (head->data == head->next->data) {
            Node* temp = head->next;
            head->next = temp->next;
            delete temp;
        }
        else {
            head = head->next;
        }
    }
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
        insertSorted(head, value);
    }

    cout << "\nSorted Linked List: ";
    printList(head);

    removeDuplicates(head);

    cout << "After removing duplicates: ";
    printList(head);
    
    deleteList(head);

    cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;

    return 0;
}